#!/usr/bin/env python3
"""
The releases of the game this repository builds, and their programs (docs/VERSIONS.md).

  python3 tools/versions.py                         # the table of versions
  python3 tools/versions.py dump [--version K]      # programs from the disc image into baserom/
  python3 tools/versions.py config [--version K]    # config/versions/<K>/programs.tsv from the dump
  python3 tools/versions.py check [--version K]     # the dump against the committed programs.tsv

Every version is one disc image in baserom/ (named as in VERSIONS; hard-link it from wherever
your discs live, never commit it). Its programs are the boot executable and the 31 SNR2
relocatable modules under BIN/ (docs/VERSIONS.md):

  baserom/<K>/<EXE>                          the boot executable as the disc stores it
  baserom/<K>/BIN/<name>.REL                 each SNR2 module on the disc

The primary version (NTSC-U v1.00) also supports the standard root baserom paths:
baserom/SCUS_976.23 and baserom/BIN/.

config/versions/<K>/programs.tsv holds what identifies each program: its SHA-1 as the disc
stores it, its entry point, and each section's address, size and SHA-1. Only hashes,
addresses and sizes: never bytes.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import os
import struct
import sys
from dataclasses import dataclass
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

from disc import IsoDisc  # noqa: E402
import elf  # noqa: E402
import rel  # noqa: E402

MODULE_COUNT = 31


@dataclass(frozen=True)
class Version:
    key: str            # short name: "us", "pal"
    id: str             # report / serial id: "SCUS_976.23", "SCES_554.96"
    label: str          # for people: "NTSC-U v1.00", "PAL v1.00"
    region: str         # "USA", "Europe"
    iso: str            # the disc image's canonical file name in baserom/
    exe: str            # the boot executable on the disc (SYSTEM.CNF's BOOT2)
    exe_sha1: str
    exe_sha256: str
    iso_sha1: str
    iso_sha256: str
    iso_size: int
    boot_size: int
    hz: int             # video mode vertical frequency (60 or 50)
    tag: str            # prefix tag for version-specific symbols ("U", "E")
    primary: bool = False

    @property
    def base(self) -> Path:
        """baserom/<key>/, or baserom/ for primary."""
        return ROOT / "baserom" if self.primary else ROOT / "baserom" / self.key

    @property
    def exe_path(self) -> Path:
        return self.base / self.exe

    @property
    def modules_dir(self) -> Path:
        return self.base / "BIN"

    @property
    def config(self) -> Path:
        return ROOT / "config/versions" / self.key


VERSIONS = (
    Version(
        key="us",
        id="SCUS_976.23",
        label="NTSC-U v1.00",
        region="USA",
        iso="SCUS_976.23.iso",
        exe="SCUS_976.23",
        exe_sha1="88cd92d487d5aef79e7a96e4dffb78d2f7f7c1c8",
        exe_sha256="1341f13c11e54e57748e963a5d49c28a571c4b87f98998687e1b1741c39f7911",
        iso_sha1="6f4a37c8157e3e1214abed01406cbfce42e22cc6",
        iso_sha256="128abfa2fb8eb4dc253513d3beb9029dfb8698966ecc7b8266230e8739b8e908",
        iso_size=4268916736,
        boot_size=1104076,
        hz=60,
        tag="U",
        primary=True,
    ),
    Version(
        key="pal",
        id="SCES_554.96",
        label="PAL v1.00",
        region="Europe",
        iso="SCES_554.96.iso",
        exe="SCES_554.96",
        exe_sha1="3e0aa1e8690afc96e3edd695285ac870fc045446",
        exe_sha256="b45ccafe2281878f4ce7b7b04aa0007e7b2227645254678c6ecf1602c8181cbf",
        iso_sha1="ba1ca463f0900b61eaedf875f1791672979ae0d3",
        iso_sha256="c7ee9dbf93fc0f09db612167598ba8052494bf0f2ab7528241973b4625dca817",
        iso_size=4005429248,
        boot_size=1104076,
        hz=50,
        tag="E",
        primary=False,
    ),
)

PRIMARY = next(v for v in VERSIONS if v.primary)
BY_KEY = {v.key: v for v in VERSIONS}
OTHERS = tuple(v for v in VERSIONS if not v.primary)


def get(key: str | None) -> Version:
    """Return the version named KEY (key, id or alias), or PRIMARY by default."""
    if key is None:
        return PRIMARY
    k = key.strip().lower()
    for v in VERSIONS:
        if k in (v.key.lower(), v.id.lower()):
            return v
    if k in ("usa", "ntsc", "ntsc-u"):
        return get("us")
    if k in ("eu", "europe", "pal"):
        return get("pal")
    sys.exit(f"unknown version {key!r}: one of " + ", ".join(v.key for v in VERSIONS))


def find_disc(v: Version, user_path: Path | None = None) -> Path | None:
    """Find a readable ISO image for version V."""
    if user_path:
        p = Path(user_path)
        if p.is_file():
            return p
    candidates = [
        ROOT / "baserom" / v.key / v.iso,
        ROOT / "baserom" / v.iso,
        Path(f"/home/lynder063/Downloads/games-ps2/sac/{'Secret Agent Clank (USA) (En,Fr,De,Es,It).iso' if v.key == 'us' else 'Secret Agent Clank (Europe) (En,Fr,De,Es,It,Nl,Pt,Sv,No,Da,Fi,Pl).iso'}"),
    ]
    for c in candidates:
        if c.is_file():
            return c
    return None


def read_disc(v: Version, image_path: Path | None = None) -> tuple[bytes, dict[str, bytes]]:
    """Return (boot_bytes, {rel_path: rel_bytes}) from V's disc."""
    disc_path = find_disc(v, image_path)
    if not disc_path:
        sys.exit(f"missing disc image for {v.label} (looked in baserom/{v.iso}; see docs/VERSIONS.md)")
    with IsoDisc(disc_path) as disc:
        info = disc.inspect()
        if info["boot_file"] != v.exe:
            sys.exit(f"{disc_path}: expected boot file {v.exe}, found {info['boot_file']}")
        boot = disc.file_bytes(v.exe)
        if len(boot) != v.boot_size:
            sys.exit(f"{disc_path}: boot size {len(boot)} != expected {v.boot_size}")
        if hashlib.sha256(boot).hexdigest() != v.exe_sha256:
            sys.exit(f"{disc_path}: boot SHA-256 differs from {v.label}")
        rels = {}
        for path in rel.module_paths(disc):
            rels[path] = disc.file_bytes(path)
        if len(rels) != MODULE_COUNT:
            sys.exit(f"{disc_path}: expected {MODULE_COUNT} modules, found {len(rels)}")
    return boot, rels


def dump(v: Version, image_path: Path | None = None) -> None:
    boot, rels = read_disc(v, image_path)
    # Write to version-specific path
    target_base = ROOT / "baserom" / v.key
    target_base.mkdir(parents=True, exist_ok=True)
    (target_base / v.exe).write_bytes(boot)
    (target_base / "BIN").mkdir(parents=True, exist_ok=True)
    for path, data in rels.items():
        fname = Path(path).name
        (target_base / "BIN" / fname).write_bytes(data)

    # For primary version, also keep the root baserom paths
    if v.primary:
        (ROOT / "baserom").mkdir(parents=True, exist_ok=True)
        (ROOT / "baserom" / v.exe).write_bytes(boot)
        (ROOT / "baserom" / "BIN").mkdir(parents=True, exist_ok=True)
        for path, data in rels.items():
            fname = Path(path).name
            (ROOT / "baserom" / "BIN" / fname).write_bytes(data)

    manifest = {
        "version": v.key,
        "serial": v.id,
        "label": v.label,
        "boot_file": v.exe,
        "boot_sha256": v.exe_sha256,
        "modules": {path: hashlib.sha256(data).hexdigest() for path, data in rels.items()},
    }
    (target_base / "manifest.json").write_text(json.dumps(manifest, indent=2) + "\n")
    print(f"{v.key}: dumped {v.exe} and {len(rels)} modules into {target_base.relative_to(ROOT)}")


def elf_section_rows(boot: bytes) -> list[tuple[str, str, str, int, int, str]]:
    """Return section rows for the boot ELF."""
    rows = []
    entry, = struct.unpack_from("<I", boot, 0x18)
    rows.append(("boot", "-", f"{entry:08X}", len(boot), 0, hashlib.sha1(boot).hexdigest()))
    (_kind, _machine, _version, _entry, _phoff, _shoff, _flags, _ehsize, _phentsize,
     _phnum, _shentsize, shnum, shstrndx), _programs, sections = elf._headers(boot)
    names_offset, names_size = sections[shstrndx][4], sections[shstrndx][5]
    names = boot[names_offset:names_offset + names_size]
    for s in sections:
        name_at, typ, sflags, addr, offset, size, link, info, align, entsize = s
        name_end = names.find(b"\0", name_at)
        sname = names[name_at:name_end].decode("ascii", "replace") if name_end >= 0 else ""
        if sname:
            sdata = b"" if typ == 8 else boot[offset:offset + size]
            rows.append(("boot", sname, f"{addr:08X}", size, typ, hashlib.sha1(sdata).hexdigest()))
    return rows


def program_rows(v: Version, image_path: Path | None = None) -> list[tuple[str, str, str, int, int, str]]:
    """(program, section, address, size, type, sha1) rows."""
    boot, rels = read_disc(v, image_path)
    rows = elf_section_rows(boot)

    for mpath in sorted(rels.keys()):
        mdata = rels[mpath]
        m_sha1 = hashlib.sha1(mdata).hexdigest()
        (magic, reloc_at, reloc_count, symbol_at, symbol_count, _image_name_at,
         _ctors_at, _dtors_at, _exports_at, _exports_count, _unknown,
         declared_size, _unknown2, packed_at, _unknown_at38) = rel.HEADER.unpack_from(mdata)
        rows.append((mpath, "-", "00000000", len(mdata), 0, m_sha1))
        rows.append((mpath, "header", "00000000", 60, 1, hashlib.sha1(mdata[:60]).hexdigest()))
        rows.append((mpath, "payload", f"{60:08X}", reloc_at - 60, 1, hashlib.sha1(mdata[60:reloc_at]).hexdigest()))
        rows.append((mpath, "reloc", f"{reloc_at:08X}", reloc_count * 12, 1, hashlib.sha1(mdata[reloc_at:symbol_at]).hexdigest()))
        rows.append((mpath, "symtab", f"{symbol_at:08X}", symbol_count * 12, 2, hashlib.sha1(mdata[symbol_at:symbol_at + symbol_count * 12]).hexdigest()))
        if packed_at:
            rows.append((mpath, "packed", f"{packed_at:08X}", len(mdata) - packed_at, 1, hashlib.sha1(mdata[packed_at:]).hexdigest()))
    return rows


def read_programs(v: Version) -> list[tuple[str, str, str, int, int, str]]:
    path = v.config / "programs.tsv"
    if not path.is_file():
        sys.exit(f"missing {path.relative_to(ROOT)}; run 'python3 tools/versions.py config --version {v.key}'")
    rows = []
    for line in path.read_text(encoding="utf-8").splitlines():
        if line and not line.startswith("#"):
            prog, sect, addr, size, typ, h = line.split("\t")
            rows.append((prog, sect, addr, int(size), int(typ), h))
    return rows


def write_config(v: Version, image_path: Path | None = None) -> None:
    boot, rels = read_disc(v, image_path)
    v.config.mkdir(parents=True, exist_ok=True)

    # 1. programs.tsv
    rows = program_rows(v, image_path)
    head = (
        f"# {v.label} ({v.id}): its programs and their sections, from the dump (tools/versions.py config).\n"
        "# A program's own row has section '-' and its entry point, size and SHA-1 as the disc stores it.\n"
        "# Hashes, addresses and sizes only.\n"
        "# program\tsection\taddress\tsize\ttype\tsha1\n"
    )
    prog_content = head + "".join(f"{p}\t{s}\t{a}\t{n}\t{t}\t{h}\n" for p, s, a, n, t, h in rows)
    (v.config / "programs.tsv").write_text(prog_content, encoding="utf-8")
    print(f"wrote {(v.config / 'programs.tsv').relative_to(ROOT)} ({len(rows)} entries)")

    # 2. target.json
    target_data = {
        "game": "Ratchet & Clank: Secret Agent Clank",
        "platform": "PlayStation 2",
        "region": v.region,
        "serial": v.id,
        "system_cnf_version": "1.00",
        "video_mode": "NTSC" if v.hz == 60 else "PAL",
        "boot_file": v.exe,
        "iso_size": v.iso_size,
        "iso_sha1": v.iso_sha1,
        "iso_sha256": v.iso_sha256,
        "iso9660_declared_size": v.iso_size,
        "boot_size": v.boot_size,
        "boot_sha1": v.exe_sha1,
        "boot_sha256": v.exe_sha256,
        "module_count": MODULE_COUNT,
        "matching_compiler": None,
    }
    (v.config / "target.json").write_text(json.dumps(target_data, indent=2) + "\n", encoding="utf-8")
    print(f"wrote {(v.config / 'target.json').relative_to(ROOT)}")

    # 3. modules.tsv
    parsed_modules = [rel.parse_module(p, rels[p]) for p in sorted(rels.keys())]
    modules_tsv = rel.render_modules(parsed_modules)
    (v.config / "modules.tsv").write_text(modules_tsv, encoding="utf-8", newline="\n")
    print(f"wrote {(v.config / 'modules.tsv').relative_to(ROOT)}")

    # 4. boot_layout.json
    (_kind, _machine, _version, entry, phoff, shoff, flags, ehsize, phentsize,
     phnum, shentsize, shnum, shstrndx), raw_progs, sections = elf._headers(boot)
    names_offset, names_size = sections[shstrndx][4], sections[shstrndx][5]
    names = boot[names_offset:names_offset + names_size]

    prog_headers_list = []
    for p in raw_progs:
        ptyp, poffset, pvaddr, ppaddr, pfilesz, pmemsz, pflags, palign = p
        prog_headers_list.append({
            "type": ptyp, "offset": poffset, "vaddr": pvaddr, "paddr": ppaddr,
            "filesz": pfilesz, "memsz": pmemsz, "flags": pflags, "align": palign,
        })

    sect_headers_list = []
    for s in sections:
        name_at, typ, sflags, addr, offset, size, link, info, align, entsize = s
        name_end = names.find(b"\0", name_at)
        sname = names[name_at:name_end].decode("ascii", "replace") if name_end >= 0 else ""
        sect_headers_list.append({
            "name": sname, "name_offset": name_at, "type": typ, "flags": sflags,
            "addr": addr, "offset": offset, "size": size, "link": link,
            "info": info, "align": align, "entsize": entsize,
        })

    layout = {
        "size": len(boot),
        "header": {
            "type": _kind, "machine": _machine, "version": _version, "entry": entry,
            "phoff": phoff, "shoff": shoff, "flags": flags, "ehsize": ehsize,
            "phentsize": phentsize, "phnum": phnum, "shentsize": shentsize,
            "shnum": shnum, "shstrndx": shstrndx,
            "ident": boot[:16].hex(),
        },
        "program_headers": prog_headers_list,
        "sections": sect_headers_list,
    }
    (v.config / "boot_layout.json").write_text(json.dumps(layout, indent=1) + "\n", encoding="utf-8")
    print(f"wrote {(v.config / 'boot_layout.json').relative_to(ROOT)}")


def check(v: Version, image_path: Path | None = None) -> bool:
    want = read_programs(v)
    have = program_rows(v, image_path)
    bad = [f"want {w} != have {h}" for w, h in zip(want, have) if w != h]
    if len(want) != len(have):
        bad.append(f"row count mismatch: want {len(want)}, have {len(have)}")
    for r in bad[:10]:
        print(f"  {v.key}: differs: {r}")
    disc_p = find_disc(v, image_path)
    loc_str = str(disc_p) if disc_p else "unknown location"
    if not bad:
        prog_count = sum(1 for r in want if r[1] == "-")
        print(f"{v.key} ({v.label}): disc image matches committed programs.tsv ({prog_count} programs, {len(want)} sections) [source: {loc_str}]")
        return True
    else:
        print(f"{v.key} ({v.label}): {len(bad)} rows differ")
        return False


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("command", nargs="?", choices=("dump", "config", "check"))
    parser.add_argument("--version", "-v", action="append", help="version key, serial id, or alias (default: all)")
    parser.add_argument("--image", type=Path, help="override path to disc ISO image")
    args = parser.parse_args()

    if not args.command:
        print(f"{'key':<8} {'id':<16} {'label':<16} {'region':<10} {'hz':>3}  disc image")
        for v in VERSIONS:
            print(f"{v.key:<8} {v.id:<16} {v.label:<16} {v.region:<10} {v.hz:>3}  baserom/{v.iso}" + ("  (primary)" if v.primary else ""))
        return

    versions_to_run = [get(k) for k in args.version] if args.version else list(VERSIONS)
    ok = True
    for v in versions_to_run:
        if args.command == "dump":
            dump(v, args.image)
        elif args.command == "config":
            write_config(v, args.image)
        elif args.command == "check":
            ok &= check(v, args.image)
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()
