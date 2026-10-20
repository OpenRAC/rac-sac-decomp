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
- [x] **The gates.** The **body gate** exists and is strict
      (`work/E0/harness.py`): it compiles one source, links it at the
      measured offset, resolves the fixups from the retail tables and
      compares every byte. The **placement gate** exists
      (`tools/placement_gate.py`): it checks that every proved body lies in
      the code interval, that its extent is the measured one, that no two
      placements of a module overlap, and that the published source still
      compiles to the retail bytes. The **module gate** exists
      (`tools/module_gate.py`): it rebuilds every module that carries proved
      bodies from its published sources and requires the result to equal the
      retail module, hash included. The **assembly baseline** is qualified
      for all 31 modules (`tools/assembly_baseline.py`): every candidate
      code interval rebuilds byte for byte, 69 483 520 bytes in total. The
      **complete-program gate** -- rebuild every body of a module from
      source, then the disc, and compare the hashes -- does not exist yet:
      it is the next root task, and no body is promoted until it does.
- [ ] **The tests.** The repository guard exists
      (`python3 tools/check_repository.py`). The unit tests of the tools are
      still missing.

## 3. State of the campaign

- **Foundation (E0) is delivered**: 31 modules read, 409 233 candidate entry
  intervals, 64 714 676 bytes of bounded bodies by placement, the shortlist
  (930 targets, 453 of them shared with another placement), 62 lot tables,
  the harness, and its negative control (a body with the wrong value is
  refused at the exact byte that differs).
- **The assembly baseline is qualified**: the code interval of each of the
  31 modules rebuilds byte for byte (69 483 520 bytes). Every C body is
  therefore measured against a code region that is known to be the retail
  code.
- **Wave 1 is done** (lots L01, L03, L05, L07): 49 placements of 28
  distinct sources are proved and published in `src/levels/bodies/`, with
  the placement table `config/levels/bodies.tsv` (1 760 bytes by
  placement). The root re-measured every claim before publishing it, and
  the placement gate passes on the result.
- The proofs are **body-level**. The program-level gate is pending, so the
  published numbers are not promoted and no percentage is published.

### What the first wave measured about the compiler

Four classes of difference showed up, and they are worth keeping:

| Class | Example | Reading |
| --- | --- | --- |
| one bit of a branch | `LEVEL10.REL:0x0490C0`, 255/256 bytes: the retail uses the *likely* form of the COP1 branch | the same routine is exact in `LEVEL1.REL:0x0490C8`; the modules are near-copies, not copies |
| `sltiu $v1,$v1,1` | `LEVEL11.REL:0x033B10`, 127/128 bytes | the retail form comes from `TARGET_DEBUG_C_MODE` (`-mdebugc`) in the pinned compiler; the cause is measured in its `mips.md`/`mips.cxx`, but the option also moves the register assignment, so it is **not** a profile change yet |
| register and scheduling | `LEVEL10.REL:0x033B10` | the retail keeps the comparison result in the register of the comparison, and puts the address computation in the delay slot of a call: a difference of source *form*, not of option |
| early return | `LEVEL11.REL:0x0337E8`, 255/256 bytes | the retail skips the restore of `$ra` on one path: a *sibling call* shape |

A candidate profile change needs a measured cause, a known provenance and a
regression control before it is used. The `-mdebugc` route has the first
two; the control run over the 49 proved placements is the next step.

**The `-mdebugc` control is measured.** Recompiling the 49 proved bodies
with `-O2 -G0 -mdebugc` keeps **49/49** of them exact: the option breaks
nothing that is proved. It does **not** unlock the parked bodies either:
on the two `sltiu` bodies the first difference moves *earlier* (body byte
48 to body byte 4), because the option also changes the frame. The verdict
is therefore: a candidate route, not a profile. Reproduce it with
`work/E0/trial_mdebugc.py` and `work/E0/trial_mdebugc_bodies.sh`.

## 4. What is next

1. **The module rebuild.** Compile the accepted bodies of a module, link
   them at their placements, and compare the rebuilt module with the retail
   module -- the bytes outside the rebuilt bodies included. Then the disc
   rebuild and the pinned hash. Until that exists, the campaign measures
   instruction sequences, not programs.
2. **The `-mdebugc` route.** The measured cause is known; the regression
   control over the 49 proved placements is not. A profile change is only
   accepted with its control.
3. **Wave 2.** 58 lot tables are cut and ready; the four lots of wave 1
   proved 49 of their 60 targets.
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
