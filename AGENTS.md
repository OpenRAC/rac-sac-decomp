# Instructions for contributors and AI agents

Read `README.md`, `docs/agents/prompt.md`, `docs/contributing/method.md`, `docs/contributing/evidence.md` and
`docs/state.md` before changing this project.

This repository adopts the **evidence standard and source layout** of the
sibling OpenRAC projects (rac1-decomp, rac2-gc-decomp, rac5-sm-decomp). It
does **not** adopt their compilers, their formats or their boundaries.

## Ten working rules

1. **Bounds and ownership.** Each replacement range has one owner, no overlaps
   or duplicate names. A compiled prefix or a next-label interval is not proof
   of a complete function. Unknown extents remain provisional and uncounted.
2. **Explicit promotion.** Count C only when the claimed body is actually
   linked at every reviewed placement and the complete-program gates pass.
   An assembly fallback preserves the baseline but earns no C credit. One
   proven zero word of linker alignment may follow a complete body, but count
   only compiled body bytes after boundary and semantic review; promote
   separately.
3. **Evidence-based profiles.** Compiler routes, options and patches require a
   measured cause, known provenance and regression controls. Do not select a
   compiler just because one sample matches. Requalify affected accepted
   bodies.
4. **Proven names and types.** Keep reference symbols stable. Descriptive
   aliases, prototypes, field sizes, offsets and signedness need evidence from
   symbols, code, callers or data. Share definitions rather than inventing
   layouts. A source is named after the function it defines, never after
   another function with the same bytes. In SNR2 modules, different named
   imports can all link to address zero before loading. Preserve the import
   name at each call relocation: equal linked bytes do not justify another
   name.
5. **Bounded experiments.** Change one hypothesis at a time. After three
   attempts with the same mismatch class, recover context, change approach or
   park the best source with its first difference and a concrete reopening
   condition.
6. **Original behavior.** Preserve original behavior, including bugs, in
   matching work. Do not add purposeless C tricks to steer code generation.
   Bug fixes and PC platform adaptations belong in explicitly separate work
   and earn no matching credit. This does not relax the strict
   no-instruction-assembly rule.
7. **Public hygiene.** Keep scratch directories, probes, generated lists and
   raw reports private. This includes instruction listings inside C
   comments. Index useful alternatives by function in `nonmatching/`.
   Reusable tools belong in `tools/` with tests; public text is English.
8. **Pure C evidence.** C/C++ evidence must come from compiler-generated
   instructions: no inline or global assembly, no fixed-register bindings, no
   raw instruction words, no artificial assembly barriers, and no edits to
   compiler output. A file-scope assembler-name label on a declaration is
   allowed solely to name a reference symbol; it must emit no instructions.
   Public runtime-library target primitives (GCC's original `longlong.h`
   multiplication primitive, the `__mips__` `umul_ppmm`) may be retained with
   their upstream provenance and licence, as in OpenRAC/rac1-decomp,
   OpenRAC/rac2-decomp and OpenRAC/rac5-sm-decomp; `tools/c_source_policy.py`
   accepts each reviewed primitive only in its exact upstream form, in the
   source and in its preprocessed text. A primitive is not a match: its
   compiled bytes are checked at every linked place.
9. **Authored form, not steered codegen.** When the compiled bytes do not
   match, the answer is the *source*, not the compiler's mood. Recover the
   authentic form of the routine: where the values live, how many are live at
   once, in which order they are produced. A construct whose only purpose is
   to move a value into a different register is not accepted.
10. **One writer in the clone.** Only the root integrates. Agents write in
    their own lot directory under `work/`.

## What counts as a match

After the applicable program layout, assembly baseline, function boundary and
compiler profile have been qualified, keep one authored C/C++ definition per
function in `src/`. A useful but nonmatching attempt belongs in
`nonmatching/`. Only a qualified toolchain reproducing the **complete retail
program bytes at every applicable placement** can establish a match.
Compiling successfully, matching a few instructions, or comparing masked bytes
cannot.

## One definition per function

The rules of `OpenRAC/rac1-decomp`, `OpenRAC/rac2-gc-decomp` and
`OpenRAC/rac3-decomp` apply here.

- A level function is the same function in every module that carries it.
  `tools/function_units.py` identifies it by its symbol, its size and its
  relocation-masked shape (an anonymous one by its shape and rank).
- Each level function has **one** source, linked at every placement in every
  module. Never keep a copy per level. A function found in several modules
  lives in `src/levels/shared/`, any other in its module's directory
  (`src/levels/frontend/`, `src/levels/01_museum/` ... `src/levels/32_credits/`).
  The file and the definition carry the function's name: its symbol, or
  `func_<tag>_<offset>` at its first placement (FE.REL first, then the levels
  by number). A symbol C refuses (the static constructors
  `_GLOBAL_$I$...cpp...`) is defined under its name with those characters
  turned into `_`, and its declaration names the symbol with
  `__asm__("<symbol>")`. A file name is cut to 120 characters (an 8-digit
  hash of the symbol ends it), so that checkouts stay under the Windows path
  limit. The `file` column of `config/levels/units.tsv` gives the name.
- Local address names carry the tag of the module they were read in
  (`func_L13_049CA0`). `docs/contributing/gates.md` explains how the gates
  resolve them at the other placements.
- Two places in one program are two functions, each with its own definition.
  This holds for the boot executable too: one file per address,
  `src/boot/func_<address>.c`, whose definition keeps a proven library name
  when it has one (newlib's `Bfree`).
- Each function is counted once, and only when its source is linked at every
  placement. Zero alignment padding is not code. `tools/function_units.py
  --check` enforces this layout and these counts.

## Source methods of the sibling projects

Check `OpenRAC/rac1-decomp` and `OpenRAC/rac2-gc-decomp` before rejecting a
source method. A method those projects accept as matching evidence is
available here, subject to the same sourcing, provenance and strict-build
checks; cite their rule in the pull request. The rulings they share:

- A nonempty `do { ... } while (0)` group around real operations is
  accepted. Empty loops, dummy values, false tests, extra accesses and
  changed call contracts stay forbidden.
- Declarations of one function may differ across sources when the EE ABI is
  preserved. Each register bank must keep its order, count and widths, and
  the stack arguments, the return contract and the side effects must match.
- `volatile` stays limited to hardware registers and to memory that another
  context writes.
- Compiler routes and flags are chosen per source, with the evidence the
  profile rules require (rule 3).

## Never commit

Disc images, retail executables, extracted modules, instruction listings,
disassembly, assets, proprietary tools, build output, SDK sources or headers,
leaked or NDA source, and personal paths. The `.gitignore` covers the common
local locations, but review your own diff: the guard is structural, not a
substitute for reading the diff.

## Checks

Run the repository's own checks before a commit, and describe in the pull
request what was verified and what remains provisional. Checks enforce
structural invariants, not semantic truth: names, types, patch justification,
intent and original behavior still require evidence and review.

```
python3 tools/check_repository.py
python3 -m unittest discover -s tests
python3 tools/function_units.py --check
python3 tools/gen_progress_report.py --check
python3 tools/progress.py
python3 tools/placement_gate.py --modules <private dir> --bounds <private dir> \
                                --harness <private harness.py>
python3 tools/module_gate.py --modules <private dir> --harness <private harness.py>
```

The first five need nothing but the repository. The last two need the
private workspace, and they are the only checks that measure a body again.
After a change to a placement table, regenerate the unit tables with
`python3 tools/function_units.py --write --modules <private dir> --boot
<private executable>`, then the report with `python3 tools/gen_progress_report.py`.

The published sources have their own build, which also checks that they are
pure C and that their objects are the ones the placement table records:

```
python3 tools/build.py --cpp <cpp> --cc1 <cc1> --as <as> --check
```
