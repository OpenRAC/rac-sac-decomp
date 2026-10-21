#!/usr/bin/env python3
"""Survey the spacing of the stack slots of the level modules' prologues.

The R5900 has 64-bit general purpose registers, and a compiler decides how
far apart it puts the slots of the frame it reserves.  The retail does it
two ways: most functions reserve their slots 8 bytes apart, and 6 084
reserve them 16 bytes apart.  Both save with `sd` (8 bytes) -- it is the
*spacing* that differs, and the spacing is what decides the frame.

The first family is the one the pinned chain reproduces; the second is the
family the Sony EE-GCC 2.9 route reproduces, and it holds 5 512 bounded
bodies.

The survey prints counts and the addresses of the wide prologues; it never
publishes the bytes it reads.

Usage:
    python3 tools/slot_spacing.py --modules <private dir>
"""

from __future__ import annotations

import argparse
import sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys_path = str(ROOT / "tools")

import rabbitizer  # noqa: E402

from code_intervals import code_end_from_relocations  # noqa: E402

SP = 29
SAVED = (16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 30)


def wide_prologues(data: bytes) -> set[int]:
    """The addresses of the prologues whose stack slots are 16 bytes apart."""
    end = code_end_from_relocations(data)
    words = []
    for site in range(0, end, 4):
        word = int.from_bytes(data[site:site + 4], "little")
        name = rabbitizer.Instruction(
            word, site, rabbitizer.InstrCategory.R5900).getOpcodeName()
        words.append((site, word, name))

    result: set[int] = set()
    for index, (site, word, name) in enumerate(words):
        if name != "addiu":
            continue
        rs = (word >> 21) & 31
        rt = (word >> 16) & 31
        immediate = word & 0xFFFF
        if immediate & 0x8000:
            immediate -= 0x10000
        if rs != SP or rt != SP or immediate >= 0:
            continue
        offsets = []
        for step in range(1, 14):
            if index + step >= len(words):
                break
            _, other, other_name = words[index + step]
            if other_name in ("sd", "sw", "ld", "lw"):
                other_rt = (other >> 16) & 31
                other_rs = (other >> 21) & 31
                if other_rs != SP or other_rt not in SAVED:
                    continue
                offset = other & 0xFFFF
                if offset & 0x8000:
                    offset -= 0x10000
                offsets.append(offset)
        if len(offsets) < 2:
            continue
        offsets = sorted(offsets)
        steps = {b - a for a, b in zip(offsets, offsets[1:]) if b - a > 0}
        if steps and min(steps) >= 16:
            result.add(site)
    return result


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--modules", type=Path, required=True,
                        help="the private directory of the retail modules")
    args = parser.parse_args()

    total = Counter()
    per_module: dict[str, Counter] = {}
    for path in sorted(args.modules.glob("*.REL")):
        data = path.read_bytes()
        wide = wide_prologues(data)
        counts = Counter({"wide": len(wide)})
        per_module[path.name] = counts
        total.update(counts)

    print(f"the wide family: {total['wide']} prologue(s) whose stack slots are")
    print("16 bytes apart, over the 31 modules:")
    for name in sorted(per_module):
        print(f"  {name:16s} {per_module[name]['wide']:5d}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
