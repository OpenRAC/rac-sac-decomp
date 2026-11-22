# Third-party notices

The authored material of this repository is GPL-3.0 (`LICENSE`).

## Reused from the sibling OpenRAC projects

The following files are adapted from the OpenRAC decompilation projects, which
are GPL-3.0. The copyright and licence of those projects are retained.

| File here | Origin | Adaptation |
| --- | --- | --- |
| `tools/check_repository.py` | `OpenRAC/rac5-sm-decomp`, `tools/check_repository.py` | rewritten for this repository's layout and forbidden paths; the checks are structural, as upstream |
| `tools/lot_table.py` | `OpenRAC/rac5-sm-decomp`, wave kit `w18/E1/shortlist18.py` and the lot runner | new tool: the lot-table schema, a structural checker, and a shortlist cutter written for this repository's wave protocol |
| `tools/disc.py` | `OpenRAC/rac5-sm-decomp`, `tools/disc.py` | rewritten: the reader of the ISO9660 image, the file list, the extraction of one file, and the hashes; the target check reads `config/target.json` of this repository |
| `tools/elf.py` | `OpenRAC/rac5-sm-decomp`, `tools/elf.py` | rewritten: the ELF structure, the symbol table and the function symbols, for the boot executable of this disc |
| `tools/rel.py` | `OpenRAC/rac5-sm-decomp`, `tools/rel.py` | adapted: the SNR2 module reader of this disc (the modules are under `BIN/`, named `FE.REL` and `LEVEL<n>.REL`), the catalogues and the target check |
| `tools/code_intervals.py` | `OpenRAC/rac5-sm-decomp`, `tools/snr2_assembly.py` | adapted: the derivation of the candidate code interval of a module from its jump relocations, without the assembler step; the catalogue is metadata only |
| `tools/function_inventory.py` | `OpenRAC/rac5-sm-decomp`, `tools/level_function_inventory.py` | adapted: the candidate entries and their bounded bodies, the retail symbol names, and a branch decoder checked against `rabbitizer` 1.16.2 (28 210 edges, no difference) |
| `tools/shortlist.py` | `OpenRAC/rac5-sm-decomp`, wave kit `w17/E0/shortlist.py` | adapted: the work queue of a wave, ranked by leverage (the number of placements that carry the same raw body) |
| `tools/r5900_assembly.py` | `OpenRAC/rac5-sm-decomp`, `tools/r5900_assembly.py` | adapted: the rendering of a code interval as R5900 assembly, with the two forms the SN assembler does not encode like the retail code (the accumulator vector instructions and the COP1 branches) written as raw words |
| `tools/assembly_baseline.py` | `OpenRAC/rac5-sm-decomp`, `tools/snr2_assembly.py` | adapted: the assembly baseline of the SNR2 modules -- render, assemble, link, compare with the retail interval -- and the metadata catalogue of the result |
| `tools/c_source_policy.py` | `OpenRAC/rac5-sm-decomp`, `tools/c_source_policy.py` | adapted: the rejection of inline assembly, of global assembly blocks, of register variables and of assembler directives, with the symbol-label exception of the upstream |
| `tools/versions.py`, `tools/version_check.py` | `OpenRAC/rac1-decomp`, `tools/versions.py`, `tools/version_check.py` | adapted: multi-version tracking table, dump, config extraction, check gates and cross-version comparison |
| `tools/gen_progress_report.py` | `OpenRAC/rac1-decomp` and `OpenRAC/rac5-sm-decomp`, `tools/gen_progress_report.py` | adapted: objdiff v2 progress report for ByteMatch, one unit per candidate function as in the rac5 report |
| `tools/function_units.py` | `OpenRAC/rac5-sm-decomp`, `tools/level_accepted_shapes.py`, `tools/zero_padding.py`; the function catalogue rules of `OpenRAC/rac1-decomp` and `OpenRAC/rac2-gc-decomp` | new tool: the candidate code cut into functions, fragments and zero padding, each level function identified across the modules by symbol and relocation-masked shape and counted once |
| `tools/level_names.py` | `OpenRAC/rac5-sm-decomp`, `tools/level_names.py` and `tools/level_source_layout.py` | adapted: the level names, source directories and module tags of this disc |
| `AGENTS.md` | `OpenRAC/rac5-sm-decomp`, `AGENTS.md` | the seven upstream rules, plus three rules added here (pure C evidence, authored form, one writer) and the rewritten wording |
| `docs/contributing/method.md`, `docs/contributing/evidence.md` | the method of `OpenRAC/rac2-gc-decomp` and `OpenRAC/rac5-sm-decomp` | rewritten for a platform-independent protocol |
| `docs/agents/prompt.md` | the wave briefs of `OpenRAC/rac5-sm-decomp` | rewritten as a platform-independent starter prompt |

Copyright (C) the OpenRAC contributors. This program is free software: you can
redistribute it and/or modify it under the terms of the GNU General Public
License as published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

## Sources ported from rac5-sm-decomp

Size Matters and Secret Agent Clank are built on the same engine. Level
and boot sources whose header reads "Ported from OpenRAC/rac5-sm-decomp <path>" are
adapted from the accepted C of `OpenRAC/rac5-sm-decomp` (GPL-3.0). The
function there compiles to the same relocation-masked bytes. The adaptation
gives each source this game's symbol and local names, and its own proof at
every placement here. The copyright and licence of that project are retained.

## GCC runtime library (libgcc)

These bodies of `src/levels/shared/` reproduce routines of GCC's runtime
library that the EE-GCC 2.9 toolchain linked into the game, and follow the
form of GCC's own sources: `fp-bit.c` (`dptofp.c`, `dptoli.c`, `dptoul.c`,
`fpadd.c`, `fpcmp.c`, `fpdiv.c`, `fpmul.c`, `fpsub.c` and `__negdf2.c`),
`libgcc2.c` (`__floatdisf.c`) and `crtstuff.c` (`__do_global_dtors.c`).
Each source serves every module that links the routine. Those GCC files are
Copyright Free Software Foundation, Inc., licensed under the GNU General
Public License version 2 or later with the libgcc linking exception; that
licence and its copyright are retained for the parts that come from them.

## newlib

These bodies of `src/boot/` follow the form of newlib's
`libc/stdlib/mprec.c`, which the boot executable links: `func_0018F920.c`
(`Bfree`), `func_0018FB98.c` (`hi0bits`) and `func_0018FC20.c` (`lo0bits`).
That file was written by David M. Gay (Copyright (c) 1991 by AT&T) and is
distributed with newlib under its permission notice, which applies to the
parts that come from it.

Other boot sources follow newlib routines, and their header names the
upstream file. Among them are the math routines of `libm/math` and
`libm/common` (`e_log10.c`, `ef_acos.c`, `ef_atan2.c`, `ef_sqrt.c`,
`kf_cos.c`, `s_floor.c`, `sf_cos.c`, `sf_sin.c`, `sf_tan.c`,
`sf_copysign.c` and their kin) and the stdio helpers of `libc/stdio`. Each
upstream file's own notice applies to the parts that come from it. The math
routines come from fdlibm, whose notice is:

```text
Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.

Developed at SunPro, a Sun Microsystems, Inc. business.
Permission to use, copy, modify, and distribute this
software is freely granted, provided that this notice
is preserved.
```

## Not included

No source, header, sample or tool from any proprietary SDK is included here,
and no leaked or NDA source is used. The game, its assets and any proprietary
toolchain are not part of this repository; see `LEGAL.md`.
