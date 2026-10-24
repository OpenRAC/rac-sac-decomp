# Versions

This repository covers every release of the game we have. Each one is a version with its own
disc, its own byte-identical configuration and metadata, and its own function inventory,
and they share one C source.

| Key | Report id / Serial | Release | Video Mode | Disc image (`baserom/`, yours, never committed) |
| --- | --- | --- | --- | --- |
| `us` | `SCUS_976.23` | NTSC-U v1.00, the **primary** | NTSC 60 Hz | `baserom/SCUS_976.23.iso` (or `baserom/us/SCUS_976.23.iso`) |
| `pal` | `SCES_554.96` | PAL v1.00 | PAL 50 Hz | `baserom/SCES_554.96.iso` (or `baserom/pal/SCES_554.96.iso`) |

`tools/versions.py` is the table of versions. A new release slots in with one more `Version` row
there: its key, report id, disc image name, boot executable, video mode, and hashes. Every tool
supports `--version KEY` (e.g., `--version us` or `--version pal`).

## Version Specifications

| Metric | USA (`us`) | Europe (`pal`) |
| --- | --- | --- |
| Serial / ID | `SCUS_976.23` | `SCES_554.96` |
| Region | North America (NTSC-U) | Europe (PAL) |
| Video Mode | NTSC (60 Hz) | PAL (50 Hz) |
| Disc Size | 4,268,916,736 bytes | 4,005,429,248 bytes |
| Disc SHA-1 | `6f4a37c8157e3e1214abed01406cbfce42e22cc6` | `ba1ca463f0900b61eaedf875f1791672979ae0d3` |
| Disc SHA-256 | `128abfa2fb8eb4dc253513d3beb9029dfb8698966ecc7b8266230e8739b8e908` | `c7ee9dbf93fc0f09db612167598ba8052494bf0f2ab7528241973b4625dca817` |
| Boot Executable | `SCUS_976.23` | `SCES_554.96` |
| Boot Size | 1,104,076 bytes | 1,104,076 bytes |
| Boot SHA-1 | `88cd92d487d5aef79e7a96e4dffb78d2f7f7c1c8` | `3e0aa1e8690afc96e3edd695285ac870fc045446` |
| Boot SHA-256 | `1341f13c11e54e57748e963a5d49c28a571c4b87f98998687e1b1741c39f7911` | `b45ccafe2281878f4ce7b7b04aa0007e7b2227645254678c6ecf1602c8181cbf` |
| Modules | 31 SNR2 modules (`BIN/FE.REL`, `BIN/LEVEL<n>.REL`) | 31 SNR2 modules (`BIN/FE.REL`, `BIN/LEVEL<n>.REL`) |

## The Programs: Dumps and Verification

```bash
# Print table of supported versions
python3 tools/versions.py

# Dump programs from disc images into baserom/
python3 tools/versions.py dump --version us
python3 tools/versions.py dump --version pal

# Rebuild configuration tables from dumps
python3 tools/versions.py config --version us
python3 tools/versions.py config --version pal

# Verify dumps or disc images against committed programs.tsv and metadata
python3 tools/versions.py check
```

A version's programs are its boot executable and the 31 SNR2 relocatable modules in `BIN/`
(`FE.REL` and `LEVEL1.REL` through `LEVEL32.REL`). `config/versions/<K>/programs.tsv` records
each program's SHA-1 as stored on the disc, its entry point, and each section's address,
size, type, and SHA-1.

## Cross-Version Comparison

```bash
# Check functions and exports against another version
python3 tools/version_check.py --version pal

# Filter to a specific module
python3 tools/version_check.py --version pal --module FE

# Filter to a specific function
python3 tools/version_check.py --version pal --func BeginLoad__12ApeLevelInst

# Self-test consistency of a version
python3 tools/version_check.py --version us --self-test
```

Statuses reported:
- `exact`: Byte-for-byte identical compiled instructions.
- `refs`: Identical instruction sequence with shifted branch/relocation target addresses.
- `differs`: Logic or code structure differs.
- `absent`: Function or export is not present in target version.

## Setting Up Disc Images Locally

Disc images are private and never committed (`.gitignore` excludes `baserom/` and `*.iso`).
You can place or link them in `baserom/`:

```bash
mkdir -p baserom/us baserom/pal
ln -s "/path/to/Secret Agent Clank (USA) (En,Fr,De,Es,It).iso" baserom/us/SCUS_976.23.iso
ln -s "/path/to/Secret Agent Clank (Europe) (En,Fr,De,Es,It,Nl,Pt,Sv,No,Da,Fi,Pl).iso" baserom/pal/SCES_554.96.iso
```

`tools/versions.py` will also search standard paths in `Downloads/` or paths listed in `LOCAL.md`.
