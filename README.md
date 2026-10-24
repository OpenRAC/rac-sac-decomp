# Ratchet & Clank: Secret Agent Clank (PS2) Decompilation

[![Website](https://img.shields.io/badge/Website-openrac.dev-ff8a00?logo=googlechrome&logoColor=white)](https://openrac.dev)
[![Discord](https://img.shields.io/badge/Discord-Join%20Community-5865F2?logo=discord&logoColor=white)](https://discord.gg/Sfd2B54PDG)
[![Code](https://bytematch.dev/OpenRAC/rac-sac-decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/OpenRAC/rac-sac-decomp)
[![Functions](https://bytematch.dev/OpenRAC/rac-sac-decomp.svg?mode=shield&label=Functions&measure=matched_functions)](https://bytematch.dev/OpenRAC/rac-sac-decomp)

A work-in-progress **matching decompilation** of *Ratchet & Clank: Secret Agent Clank* (High Impact Games / Sanzaru Games / Sony Computer Entertainment, 2008) for the PlayStation 2 (`SCUS_976.23`, NTSC-U v1.00), part of the **[OpenRAC](https://openrac.dev)** initiative.

The objective is to produce C/C++ source code that, when compiled with the original toolchain, generates a byte-identical copy of the retail executable and relocatable modules at every placement. Matched code is then refactored toward readable, idiomatic C++ with accurate types and naming, using matching builds as continuous regression tests.

> [!NOTE]
> This repository contains **no game assets, retail executables, or disassembly**. To build and verify, you must provide your own legally obtained copy of the game. Please review [`LEGAL.md`](LEGAL.md) before contributing.

---

## Progress

Decompilation progress is tracked live on **[openrac.dev](https://openrac.dev)** and **[bytematch.dev/OpenRAC/rac-sac-decomp](https://bytematch.dev/OpenRAC/rac-sac-decomp)**.

| Version | Region | Target ID | Code Matched | Functions Matched |
|---|---|---|---|---|
| **v1.00** | NTSC-U (North America) | `SCUS_976.23` | [![](https://bytematch.dev/OpenRAC/rac-sac-decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/OpenRAC/rac-sac-decomp) | [![](https://bytematch.dev/OpenRAC/rac-sac-decomp.svg?mode=shield&label=Functions&measure=matched_functions)](https://bytematch.dev/OpenRAC/rac-sac-decomp) |
| **v1.00** | PAL (Europe) | `SCES_554.96` | [![](https://bytematch.dev/OpenRAC/rac-sac-decomp.svg?mode=shield&label=Code&measure=matched_code_percent&version=SCES_554.96)](https://bytematch.dev/OpenRAC/rac-sac-decomp/SCES_554.96) | [![](https://bytematch.dev/OpenRAC/rac-sac-decomp.svg?mode=shield&label=Functions&measure=matched_functions&version=SCES_554.96)](https://bytematch.dev/OpenRAC/rac-sac-decomp/SCES_554.96) |

---

## Supported Versions

This repository tracks both the North American and European releases:

| Version | Region | Target ID / Serial | Video Mode | Modules | Status |
|---|---|---|---|---|---|
| **v1.00** | NTSC-U (North America) | `SCUS_976.23` | NTSC (60 Hz) | 31 SNR2 (`BIN/`) | **Primary** target |
| **v1.00** | PAL (Europe) | `SCES_554.96` | PAL (50 Hz) | 31 SNR2 (`BIN/`) | Tracked & verified |

NTSC-U v1.00 is the primary version; the PAL release shares its C source and is tracked and verified through `tools/versions.py` and `tools/version_check.py`. For detailed program manifests, hashes, and cross-version comparison instructions, see [`docs/VERSIONS.md`](docs/VERSIONS.md).

---

## Quick Start

### 1. Setup & Dependencies

Ensure Python 3.10+ is available on your machine:

```bash
git clone https://github.com/OpenRAC/rac-sac-decomp.git
cd rac-sac-decomp
```

### 2. Provide Your Retail Discs

Place your disc images (or create symlinks) in `baserom/` (see [`LOCAL.md`](LOCAL.md) for local paths):

```bash
mkdir -p baserom/us baserom/pal

# USA release (Expected SHA-1: 6f4a37c8157e3e1214abed01406cbfce42e22cc6)
ln -sf "/path/to/Secret Agent Clank (USA).iso" baserom/us/SCUS_976.23.iso
ln -sf "/path/to/Secret Agent Clank (USA).iso" baserom/SCUS_976.23.iso

# Europe release (Expected SHA-1: ba1ca463f0900b61eaedf875f1791672979ae0d3)
ln -sf "/path/to/Secret Agent Clank (Europe).iso" baserom/pal/SCES_554.96.iso
```

### 3. Verify Dumps and Checks

```bash
# Verify both disc images against committed program specifications
python3 tools/versions.py check

# Run the repository checks and test suite
python3 tools/check_repository.py
python3 -m unittest discover -s tests

# Check decompilation progress
python3 tools/progress.py

# Cross-version comparison (compare US vs PAL)
python3 tools/version_check.py --version pal
```

---

## Documentation

| Document | Description |
|---|---|
| [`PROMPT.md`](PROMPT.md) | **Starter prompt** — project identity, workstation setup, and agent mandate |
| [`AGENTS.md`](AGENTS.md) | Ten working rules, pure C evidence standard, and public hygiene rules |
| [`docs/VERSIONS.md`](docs/VERSIONS.md) | Supported releases (USA and Europe), program tables, and cross-version checks |
| [`docs/METHOD.md`](docs/METHOD.md) | The wave protocol, from the foundation lot to pull request integration |
| [`docs/EVIDENCE.md`](docs/EVIDENCE.md) | What counts as matching proof, and what does not |
| [`docs/GATES.md`](docs/GATES.md) | The three gates: body gate, placement gate, and complete-program gate |
| [`docs/STATE.md`](docs/STATE.md) | Anchor file: current measured state, verified metrics, and next steps |
| [`docs/REUSE.md`](docs/REUSE.md) | Method and toolchain reuse from sibling OpenRAC projects (RAC1, RAC2, RAC5) |

---

## Repository Layout

| Path | Description |
|---|---|
| `src/` | Accepted authored C/C++ definitions, one per function |
| `src/levels/bodies/` | Proved bodies of the SNR2 level modules, one file per distinct body |
| `src/boot/bodies/` | Proved bodies of the boot executable |
| `nonmatching/` | Useful but nonmatching attempts, indexed by function |
| `config/` | Pinned metadata: target identities, toolchain profile, placement tables |
| `config/versions/` | Multi-version configurations (`us/`, `pal/`): `programs.tsv`, `modules.tsv`, `target.json` |
| `config/levels/` | Level module catalogues, code intervals, baseline, and placement tables |
| `config/boot/` | Boot executable inventory, slot surveys, and placement tables |
| `tools/` | Reusable tools (versions, rel, elf, disc, inspection, baseline, gates) with tests |
| `tests/` | Unit tests for repository tools (synthetic test data only) |
| `docs/` | Method, gates, evidence standards, reuse, and version documentation |
| `work/` | Private workspace: modules, bounds, lots, agent dossiers (git-ignored except templates) |

---

## Contributing

Contributions are warmly welcome! Whether you are interested in decompiling functions, researching engine structures, or improving documentation:

- See [`CONTRIBUTING.md`](CONTRIBUTING.md) for contribution guidelines.
- Review [`AGENTS.md`](AGENTS.md) for the non-negotiable ten working rules.
- Check [`docs/STATE.md`](docs/STATE.md) to see where the current campaign stands.
- Join our **[Discord Community](https://discord.gg/Sfd2B54PDG)** to discuss progress and collaborate!

---

## Credits

This project builds upon reverse-engineering research and tooling by the community:

- **[OpenRAC](https://openrac.dev)** initiative and contributors across sibling projects:
  - [`OpenRAC/rac1-decomp`](https://github.com/OpenRAC/rac1-decomp) — *Ratchet & Clank* (PS2)
  - [`OpenRAC/rac2-gc-decomp`](https://github.com/OpenRAC/rac2-gc-decomp) — *Ratchet & Clank: Going Commando* (GameCube port prototype)
  - [`OpenRAC/rac5-sm-decomp`](https://github.com/OpenRAC/rac5-sm-decomp) — *Ratchet & Clank: Size Matters* (PS2)
- **High Impact Games** & **Sanzaru Games** — original developers of *Secret Agent Clank*.
- **Insomniac Games** — creators of the *Ratchet & Clank* universe and engine heritage.

---

## License

- Code written for this project is licensed under the [GNU General Public License v3.0](LICENSE).
- Reconstructed libraries and third-party tools retain their original licenses (see [`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md) and [`LEGAL.md`](LEGAL.md)).
- *Ratchet & Clank* is a registered trademark of Sony Interactive Entertainment. This project is not affiliated with or endorsed by Sony, High Impact Games, Sanzaru Games, or Insomniac Games.
