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
      retail module, hash included; with `--image` it writes the rebuilt
      modules back into a copy of the disc, at their recorded extents, and
      requires the image to hash to the pinned retail hash -- it does, for
      the four modules that carry proved bodies. The **assembly baseline**
      is qualified
      for all 31 modules (`tools/assembly_baseline.py`): every candidate
      code interval rebuilds byte for byte, 69 483 520 bytes in total. The
      **complete-program gate** -- rebuild every body of a module from
      source, not only the proved ones -- does not exist yet:
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
- **The boot scope is open.** The boot is a linked ELF without a symbol
  table, so its candidates are measured, not named: 3 821 intervals (1 665
  call targets and 3 620 code pointers in the data), 3 214 of them bounded
  (`config/boot/summary.json`). The first two boot lots proved 30
  placements of 9 distinct bodies, published in `src/boot/bodies/` with the
  table `config/boot/bodies.tsv`. The boot rebuilt with those bodies has
  the pinned retail hash.
- Wave 2 continues on six module lots (L09, L15, L21, L29, L35, L45).
- The proofs are **body-level**. The program-level gate is pending, so the
  published numbers are not promoted and no percentage is published.

### The boot and the modules are not the same build

The boot keeps its frames in **16-byte slots** (`sq`/`lq`, `$ra` on top),
where the level modules keep **8-byte slots** (`sd`/`ld`). The cause is the
register mode of the target: the GNU EE 2.9 tree of the pinned chain
neutralises the R5900 anchor `mips_reg_mode[0] = TImode`, and two other EE
compilers keep it.

| profile | chain | what it reproduces |
| --- | --- | --- |
| `gnu-ee-20261015` | the reconstructed GNU EE chain of the sibling project | the level modules (8-byte slots) |
| `prodg2953` | SN ProDG ee-gcc 2.95.2, from the compiler depot of the sibling workspace | the boot (`sq`/`lq` frames) |
| `sdk991111` | Sony EE-GCC 2.9-ee-991111-01, from the same depot | the boot (16-byte `sd` frames) |

The control is clean: the four frame-less bodies of the boot lot are exact
on the three chains alike -- they do not discriminate -- and the four that
carry a frame are exact only on their own chain. The profile is therefore
chosen **per source**, and the placement table records it per row. The
three profiles are pinned by hash in `config/toolchain.json`.

This is the strongest toolchain evidence of the campaign so far: the retail
build used at least two compiler configurations, and the campaign can
now name them.

The converse is measured too: the boot's two chains do **not** apply to the
level modules. Tried on a parked module body, both differ from the retail
at the very first byte -- the prologue -- because the modules keep 8-byte
slots where those chains keep 16-byte ones. The division padding of the
modules therefore belongs to a third configuration, still unnamed.

**And the boot is not homogeneous either.** `tools/slot_survey.py` measures
the slot width of every bounded body of the boot:

| slot width | bodies | where |
| --- | --- | --- |
| 16 bytes (`sq`/`lq`) | 1 146 | contiguous runs, the largest 0x00133518..0x00137D10 |
| 8 bytes (`sd`/`ld`) | 651 | contiguous runs, the largest around 0x0019B658 |
| both | 267 | mixed bodies |
| neither | 1 150 | bodies without a frame |

The two families live in **contiguous bands**, which is the signature of
two compilations inside the same executable. The route is therefore chosen
per body, and the survey is what tells which family a body belongs to.

### The bugs of the retail are part of the program

The boot's `memmove` is **buggy**: the forward copy adds the length to the
source, the backward copy adds it to the destination. A matching body has
to reproduce the bug, not fix it -- the original behaviour is the
behaviour of the retail program. The same goes for the `break`
instructions the division survey counted (854 of them): they are the
retail's own, not ours.

This is the one place where the campaign must be careful not to "improve"
the game: a fixed bug is a different program, and the hash would say so.

### The divisions of the retail code

A wave-2 lot measured a body that was one instruction short: the retail
puts a `nop` between the setup of the divisor and the `div.s`. Before that
becomes a compiler route, it has to be measured across the whole program --
`tools/div_survey.py` does it:

- the retail code holds **63 443 divisions**, of which **49 616 (78 %)** are
  preceded by one or two `nop`, and only 89 sit in a delay slot;
- the padding follows a multi-cycle floating-point operation in almost
  every case (`mtc1`, `mul.s`, `swc1`, `madd.s`, `mov.s`, `div.s` itself:
  padded every time), while an integer operation such as `addiu` is
  usually bare;
- but the rule is **not** a function of the preceding instruction alone:
  11 590 divisions carry no padding at all, and `lwc1` and `cvt.s.w` appear
  on both sides;
- and it is **not** an alignment rule either: only 48.6 % of the divisions
  of the program are 8-byte aligned, and 24.6 % are 16-byte aligned --
  the distribution any placement would give.

The conclusion is a negative one, and it is useful: a blanket "insert a
nop before every division" patch is refuted by the 11 590 bare divisions.
The retail build had a *scheduler* that inserts the padding when it judges
it necessary, and the pinned chain does not have that rule. A body that
misses only this `nop` is therefore a compiler-route question, not a
source-form question, and it stays parked until a route with a measured
cause, a known provenance and a regression control exists.

**The MIPS level is not that route.** The EE target refuses `-mips1` and
`-mips2` outright ("Only MIPS-III or MIPS-IV CPUs can support 64 bit gp
registers", the R5900 has 64-bit general purpose registers), and `-mips3`
and `-mfp32` change nothing in the body. The hazard nop belongs to the
scheduler of the retail compiler, and it is not reachable by a flag on
this target. Both measurements are in `config/toolchain.json`, under
`trials`.

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
