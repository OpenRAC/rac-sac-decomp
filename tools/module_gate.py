#!/usr/bin/env python3
"""Module gate: rebuild a module with its proved bodies and compare it.

For every module that carries proved bodies, the gate

  1. rebuilds each body from its **published source**, with the pinned chain
     and the measured relocation context, and takes the linked bytes;
  2. writes those bytes at their measured offsets in a copy of the retail
     module;
  3. compares the rebuilt module with the retail module, byte for byte, and
     compares their SHA-256.

What it proves: the bodies belong where they are placed, they do not
disturb their surroundings, and the module that contains them is the retail
module.  What it does **not** prove: that the parts of the module that have
no accepted source yet are rebuilt from source -- they are still the retail
bytes here.  The full rebuild of a module, and then of the disc, is the
stage that remains.

Usage:
    python3 tools/module_gate.py --modules <private dir> --harness <private harness.py>
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TABLE = ROOT / "config/levels/bodies.tsv"


def records(path: Path) -> list[dict[str, str]]:
    with path.open(encoding="utf-8", newline="") as handle:
        return list(csv.DictReader((line for line in handle
                                    if not line.startswith("#")), delimiter="\t"))


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--modules", type=Path, required=True)
    parser.add_argument("--harness", type=Path, required=True)
    args = parser.parse_args()

    rows = records(TABLE)
    per_module: dict[str, list[dict]] = {}
    for row in rows:
        per_module.setdefault(row["module"], []).append(row)

    problems: list[str] = []
    rebuilt_bytes = 0
    for module, entries in sorted(per_module.items()):
        path = args.modules / module
        if not path.is_file():
            problems.append(f"{module}: not extracted")
            continue
        retail = path.read_bytes()
        rebuilt = bytearray(retail)
        for row in entries:
            offset = int(row["offset"], 0)
            size = int(row["size"])
            source = ROOT / row["source"]
            with tempfile.TemporaryDirectory() as directory:
                emit = Path(directory) / "body.bin"
                result = subprocess.run(
                    [sys.executable, str(args.harness), module, row["offset"],
                     str(source), "--one-line", "--emit", str(emit)],
                    capture_output=True, text=True)
                if "\tEXACT\t" not in result.stdout:
                    problems.append(f"{module} {row['offset']}: the harness refuses "
                                    f"the body ({result.stdout.strip()})")
                    continue
                body = emit.read_bytes()
            if len(body) != size:
                problems.append(f"{module} {row['offset']}: linked body is "
                                f"{len(body)} bytes, the table says {size}")
                continue
            rebuilt[offset:offset + size] = body
            rebuilt_bytes += size
        before = hashlib.sha256(retail).hexdigest()
        after = hashlib.sha256(bytes(rebuilt)).hexdigest()
        status = "identical" if rebuilt == retail else "DIFFERENT"
        if rebuilt != retail:
            problems.append(f"{module}: the rebuilt module differs from the retail "
                            f"module ({status})")
        print(f"  {module:16s} {len(entries):3d} placement(s), "
              f"{sum(int(row['size']) for row in entries):6d} rebuilt byte(s)  "
              f"{status}  sha256 {after[:16]}")

    print(f"{rebuilt_bytes} byte(s) rebuilt from published sources, "
          f"{len(rows)} placement(s)")
    if problems:
        print("module gate failed:")
        for problem in problems:
            print(f"  {problem}")
        return 1
    print("module gate: every rebuilt module is the retail module")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
