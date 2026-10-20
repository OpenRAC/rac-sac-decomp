# STATE — the anchor of the workspace

> **Convention** : this file is the resume. Read it first, update it at every
> milestone. Everything else in the private workspace is disposable; this file
> is not.

Last update: **2026-10-20** (foundation lot delivered, wave 1 running, 26
placements proved at body level).

## 1. Where things are

| Element | Path | Role |
| --- | --- | --- |
| Public repository | this repository | authored sources, tools, documentation |
| Working clone | `LOCAL.md` (git-ignored) | the checkout the root integrates from |
| Local target | `LOCAL.md` (git-ignored) | the game image, the pinned hashes, the toolchain |
| Private workspace | `LOCAL.md` (git-ignored) | extracted modules, bounds, lots, agent dossiers |
| Anchor | `docs/STATE.md` | this file |

The private workspace is local-only on purpose: the project publishes written
source, tools and metadata, never retail bytes, listings or raw reports. Its
layout is described in `work/README.md`; the repository holds only the
templates of that layout.

## 2. What is pinned

Every value below is measured, and every measurement is repeatable with the
command written next to it.

- [x] **The target.** `SCUS_976.23`, *Ratchet & Clank: Secret Agent Clank*
      (USA, NTSC, `SYSTEM.CNF` version 1.00). ISO of 4 268 916 736 bytes,
      SHA-1 `6f4a37c8157e3e1214abed01406cbfce42e22cc6`, SHA-256
      `128abfa2fb8eb4dc253513d3beb9029dfb8698966ecc7b8266230e8739b8e908`.
      Pinned in `config/target.json`; the boot executable `SCUS_976.23` is
      1 104 076 bytes, SHA-256 `1341f13c…`.
      Verify with `python3 tools/disc.py inspect <image>`.
- [x] **The identity check.** `tools/disc.py` refuses an image whose boot
      file, size, boot hash or extents differ from `config/target.json`;
      `tools/rel.py` calls it before reading any module.
- [x] **The extraction.** The disc holds 31 SNR2 modules under `BIN/`:
      `FE.REL` (the frontend) and `LEVEL1.REL` … `LEVEL32.REL` (no 6, no 12),
      plus the boot ELF, the Bink videos, the FSB banks and `IMAGE.ZIP`.
      `tools/rel.py` reads the module tables; the modules themselves stay in
      the private workspace.
- [x] **The symbol and boundary sources.** The module symbol tables give the
      named entries; the relocation tables give the code boundary and the
      call targets. `tools/code_intervals.py` derives the code interval of
      every module from the jump relocations; `tools/function_inventory.py`
      turns the candidate entries into bounded bodies.
- [x] **The toolchain.** The GNU EE chain pinned by the sibling project
      (`gnu-ee-20261015`, `cpp`/`cc1`/`as`) with the SN ProDG linker, flags
      `-quiet -O2 -G0`. It is a **candidate** profile for this game: it
      reproduces retail bodies byte for byte, and it is not yet qualified on
      the complete program.
- [ ] **The gates.** The **body gate** exists and is strict
      (`work/E0/harness.py`): it compiles one source, links it at the
      measured offset, resolves the fixups from the retail tables and
      compares every byte. The **complete-program gate** does not exist yet:
      rebuilding a whole module and comparing its hash is the next root
      task, and no body is promoted until it does.
- [ ] **The tests.** The repository guard exists
      (`python3 tools/check_repository.py`). The unit tests of the tools are
      still missing.

## 3. State of the campaign

- **Foundation (E0) is delivered**: 31 modules read, 409 233 candidate entry
  intervals, 64 714 676 bytes of bounded bodies by placement, the shortlist
  (930 targets, 453 of them shared with another placement), 62 lot tables,
  the harness, and its negative control (a body with the wrong value is
  refused at the exact byte that differs).
- **Wave 1** (lots L01, L03, L05, L07) is running: 26 placements of 20
  distinct bodies are proved and published in `src/levels/bodies/`, with the
  placement table `config/levels/bodies.tsv`.
- The proofs are **body-level**. The program-level gate is pending, so the
  published numbers are not promoted and no percentage is published.

## 4. What is next

1. **Complete-program gate.** Rebuild a module from the placed bodies and
   compare its bytes with the retail module; then the same for the disc.
   Until it exists, the campaign measures instruction sequences, not
   programs.
2. **Compiler qualification.** The pinned chain reproduces bodies; it must
   still be shown to be the retail compiler on the whole program.
3. **Wave 2 and further.** 58 lot tables are cut and ready.
4. **The boot executable.** `SCUS_976.23` is a linked ELF without a symbol
   table; its own campaign needs its own bounds.

## 5. Resume checklist

If a session is interrupted:

1. `ls work/w1/*/RAPPORT.md` and read the reports.
2. `cat work/w1/*/resultats.tsv` for the measured table.
3. A body proved but not integrated: re-prove it with the harness, then hand
   it to the root. Do not re-run the foundation lot.
4. Update this file before stopping.

## 6. Open decisions

- The reference is the USA disc; a European revision could be a second
  target, but the pins of `config/target.json` are per-image.
- The program is one boot executable plus 31 relocatable modules; the
  complete-program gate has to treat both.
- The retail compiler identity is still unknown: the pinned chain reproduces
  the bodies it was measured on, and nothing more.
