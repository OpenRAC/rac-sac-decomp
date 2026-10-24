#!/usr/bin/env python3
"""
Check the functions and modules of one version against another (docs/VERSIONS.md).

  python3 tools/version_check.py --version pal              # compare US against PAL
  python3 tools/version_check.py --version pal --module FE  # filter to FE.REL
  python3 tools/version_check.py --version pal --func BeginLoad__12ApeLevelInst
  python3 tools/version_check.py --version us --self-test   # verify self-consistency

The comparison pairs symbols and functions across versions using export tables and
code structure. Counterparts whose instructions are identical apart from relocation/jump
addresses are identified as instruction-equivalent ('refs'), while byte-for-byte
identical routines are marked 'exact'.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

from disc import IsoDisc  # noqa: E402
import elf  # noqa: E402
import rel  # noqa: E402
import versions  # noqa: E402


def mask_mips_word(word: int) -> int:
    """Mask target address / immediate fields of MIPS branch and jump instructions."""
    opcode = word >> 26
    if opcode in (0x02, 0x03):  # j, jal: 26-bit target
        return opcode << 26
    if opcode in (0x04, 0x05, 0x06, 0x07):  # beq, bne, blez, bgtz: 16-bit branch offset
        return word & 0xFFFF0000
    if opcode == 0x01:  # bgez, bltz, etc.
        return word & 0xFFFF0000
    if opcode == 0x0F:  # lui (often paired with %hi)
        return word & 0xFFFF0000
    return word


def compare_code_spans(a: bytes, b: bytes) -> str:
    """Compare two code slices: exact, refs (masked match), or differs."""
    if len(a) != len(b):
        return "differs"
    if a == b:
        return "exact"
    if len(a) % 4 != 0:
        return "differs"
    for i in range(0, len(a), 4):
        wa = struct.unpack_from("<I", a, i)[0]
        wb = struct.unpack_from("<I", b, i)[0]
        if wa != wb:
            if mask_mips_word(wa) != mask_mips_word(wb):
                return "differs"
    return "refs"


def check_version(
    target_v: versions.Version,
    base_v: versions.Version,
    filter_module: str | None = None,
    filter_func: str | None = None,
    diff_output: bool = False,
) -> bool:
    print(f"Comparing base '{base_v.key}' ({base_v.label}) -> target '{target_v.key}' ({target_v.label})")

    base_boot, base_rels = versions.read_disc(base_v)
    targ_boot, targ_rels = versions.read_disc(target_v)

    total = 0
    exact_count = 0
    refs_count = 0
    diff_count = 0
    absent_count = 0

    results: list[dict[str, object]] = []

    for mpath in sorted(base_rels.keys()):
        mname = Path(mpath).stem
        if filter_module and filter_module.upper() not in mname.upper():
            continue
        if mpath not in targ_rels:
            print(f"  {mname}: absent in target version")
            continue

        base_data = base_rels[mpath]
        targ_data = targ_rels[mpath]

        b_mod = rel.parse_module(mpath, base_data)
        t_mod = rel.parse_module(mpath, targ_data)

        # Build symbol map for base
        b_exports = {e.name: e.address for e in b_mod.exports}
        t_exports = {e.name: e.address for e in t_mod.exports}

        # Sort exports by address to determine approximate spans
        sorted_b = sorted(b_mod.exports, key=lambda e: e.address)

        for i, exp in enumerate(sorted_b):
            name = exp.name
            if filter_func and filter_func not in name:
                continue

            b_addr = exp.address
            # Estimate size to next symbol or max 2048
            if i + 1 < len(sorted_b):
                next_addr = sorted_b[i + 1].address
                size = min(next_addr - b_addr, 2048) if next_addr > b_addr else 32
            else:
                size = 32

            total += 1
            if name not in t_exports:
                absent_count += 1
                status = "absent"
            else:
                t_addr = t_exports[name]
                b_bytes = base_data[b_addr:b_addr + size]
                t_bytes = targ_data[t_addr:t_addr + size]
                status = compare_code_spans(b_bytes, t_bytes)
                if status == "exact":
                    exact_count += 1
                elif status == "refs":
                    refs_count += 1
                else:
                    diff_count += 1

            if filter_func or diff_output and status != "exact":
                print(f"  [{status:<7}] {mname:10s} {name:40s} base=0x{b_addr:06X} target=0x{t_exports.get(name, 0):06X}")

    print("\nSummary:")
    print(f"  Total symbols checked : {total}")
    print(f"  Exact matches         : {exact_count}")
    print(f"  Relocation-only shifts: {refs_count}")
    print(f"  Code differs          : {diff_count}")
    print(f"  Absent in target      : {absent_count}")

    if total > 0:
        match_rate = (exact_count + refs_count) / total * 100.0
        print(f"  Equivalent logic rate : {match_rate:.1f}%")

    return diff_count == 0 and absent_count == 0 if base_v.key == target_v.key else True


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--version", "-v", default="pal", help="target version key or serial (default: pal)")
    parser.add_argument("--base", default="us", help="base version to compare against (default: us)")
    parser.add_argument("--module", "-m", help="filter by module name (e.g. FE, LEVEL1)")
    parser.add_argument("--func", "-f", help="filter by function name substring")
    parser.add_argument("--diff", action="store_true", help="show diffs for non-exact symbols")
    parser.add_argument("--self-test", action="store_true", help="verify target version against itself")
    args = parser.parse_args()

    target_v = versions.get(args.version)
    base_v = target_v if args.self_test else versions.get(args.base)

    ok = check_version(
        target_v=target_v,
        base_v=base_v,
        filter_module=args.module,
        filter_func=args.func,
        diff_output=args.diff,
    )
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()
