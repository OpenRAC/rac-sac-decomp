# Third-party notices

The authored material of this repository is GPL-3.0 (`LICENSE`).

## Reused from the sibling OpenRAC projects

The following files are adapted from the OpenRAC decompilation projects, which
are GPL-3.0. The copyright and licence of those projects are retained.

| File here | Origin | Adaptation |
| --- | --- | --- |
| `tools/check_repository.py` | `OpenRAC/rac5-sm-decomp`, `tools/check_repository.py` | rewritten for this repository's layout and forbidden paths; the checks are structural, as upstream |
| `tools/lot_table.py` | `OpenRAC/rac5-sm-decomp`, wave kit `w18/E1/shortlist18.py` and the lot runner | new tool: the lot-table schema, a structural checker, and a shortlist cutter written for this repository's wave protocol |
| `AGENTS.md` | `OpenRAC/rac5-sm-decomp`, `AGENTS.md` | the seven upstream rules, plus three rules added here (pure C evidence, authored form, one writer) and the rewritten wording |
| `docs/METHOD.md`, `docs/EVIDENCE.md` | the method of `OpenRAC/rac2-gc-decomp` and `OpenRAC/rac5-sm-decomp` | rewritten for a platform-independent protocol |
| `PROMPT.md` | the wave briefs of `OpenRAC/rac5-sm-decomp` | rewritten as a platform-independent starter prompt |

Copyright (C) the OpenRAC contributors. This program is free software: you can
redistribute it and/or modify it under the terms of the GNU General Public
License as published by the Free Software Foundation, either version 3 of the
License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

## Not included

No source, header, sample or tool from any proprietary SDK is included here,
and no leaked or NDA source is used. The game, its assets and any proprietary
toolchain are not part of this repository; see `LEGAL.md`.
