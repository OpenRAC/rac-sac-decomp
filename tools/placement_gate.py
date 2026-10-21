#!/usr/bin/env python3
"""Placement gate: check that every proved body owns its retail bytes.

The gate is the structural half of the evidence: for every row of the
placement table it checks that

  * the placement lies inside the code interval of its module;
  * the extent is the one the bounds measured, and no two placements of a
    module overlap;
  * the source still compiles to the retail bytes of that placement.

It does **not** rebuild a complete program: that gate does not exist yet, so
the bodies it accepts are *proved*, not *promoted*.  The numbers it prints
are three separate counts -- placements, sources and bytes -- and never a
percentage.

Usage:
    python3 tools/placement_gate.py --modules <private dir> --bounds <private dir>
                                    --harness <private harness.py>
"""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TABLE = ROOT / "config/levels/bodies.tsv"
BOOT_TABLE = ROOT / "config/boot/bodies.tsv"
INTERVALS = ROOT / "config/levels/code_intervals.tsv"
BOOT_SUMMARY = ROOT / "config/boot/summary.json"
BOOT_NAME = "SCUS_976.23"


def records(path: Path) -> list[dict[str, str]]:
    if not path.is_file():
        return []
    with path.open(encoding="utf-8", newline="") as handle:
        return list(csv.DictReader((line for line in handle
                                    if not line.startswith("#")), delimiter="\t"))


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--modules", type=Path, required=True)
    parser.add_argument("--bounds", type=Path, required=True)
    parser.add_argument("--harness", type=Path, required=True)
    parser.add_argument("--boot-harness", type=Path, default=None,
                        help="harness of the boot executable (its addresses "
                             "are virtual, not module relative)")
    parser.add_argument("--profiles", type=Path, default=None,
                        help="private table of the compiler profiles: name -> "
                             "{cpp, cc1, flags, work}.  A row whose profile is "
                             "not in the table is measured with the default "
                             "binaries of the harness.")
    parser.add_argument("--quiet", action="store_true")
    parser.add_argument("--refresh", action="store_true",
                        help="rewrite the object and source hashes of the "
                             "placement table from the measurement")
    args = parser.parse_args()

    profiles: dict[str, dict] = {}
    if args.profiles and args.profiles.is_file():
        profiles = json.loads(args.profiles.read_text(encoding="utf-8"))

    rows = records(TABLE)
    boot_rows = records(BOOT_TABLE)
    intervals = {row["module"]: row for row in records(INTERVALS)}
    boot_summary = json.loads(BOOT_SUMMARY.read_text(encoding="utf-8")) \
        if BOOT_SUMMARY.is_file() else {}
    problems: list[str] = []
    placements = 0
    bytes_covered = 0
    sources: set[str] = set()
    occupied: dict[str, list[tuple[int, int, str]]] = {}

    for row in rows + boot_rows:
        module = row["module"]
        is_boot = module == BOOT_NAME
        offset = int(row["offset"], 0)
        size = int(row["size"])
        placements += 1
        bytes_covered += size
        sources.add(row["source"])

        if is_boot:
            start = int(boot_summary.get("text_address", "0x00100000"), 16)
            end = start + int(boot_summary.get("text_bytes", 0))
        else:
            interval = intervals.get(module)
            if interval is None:
                problems.append(f"{module} {row['offset']}: no code interval")
                continue
            start = int(interval["start"], 0)
            end = int(interval["end_exclusive"], 0)
        if not start <= offset or offset + size > end:
            problems.append(f"{module} {row['offset']}: outside the code interval")

        bounds = args.bounds / ("boot.tsv" if is_boot
                                else module.replace(".REL", "") + ".tsv")
        if bounds.is_file():
            lines = [line for line in bounds.read_text(encoding="utf-8").splitlines()
                     if line and not line.startswith("#")]
            header = lines[0].split("\t")
            for line in lines[1:]:
                values = dict(zip(header, line.split("\t")))
                if int(values["start"], 0) != offset:
                    continue
                if values["body_end"]:
                    measured = int(values["body_end"], 0) - offset
                    if measured != size:
                        problems.append(f"{module} {row['offset']}: extent {size} "
                                        f"differs from the measured {measured}")
                else:
                    problems.append(f"{module} {row['offset']}: the bounds hold no "
                                    f"bounded body")
                break
            else:
                problems.append(f"{module} {row['offset']}: not a candidate entry")

        occupied.setdefault(module, []).append((offset, offset + size, row["offset"]))

        source = ROOT / row["source"]
        if not source.is_file():
            problems.append(f"{module} {row['offset']}: missing source {row['source']}")
            continue
        harness = args.boot_harness if is_boot else args.harness
        if harness is None:
            problems.append(f"{module} {row['offset']}: no boot harness given")
            continue
        if is_boot:
            command = [sys.executable, str(harness), row["offset"], str(source),
                       "--one-line"]
        else:
            command = [sys.executable, str(harness), module, row["offset"],
                       str(source), "--one-line"]
        profile = profiles.get((row.get("profile") or "").split(":")[0])
        if profile:
            command += ["--cpp", profile["cpp"], "--cc1", profile["cc1"],
                        "--flags", profile["flags"], "--work", profile["work"]]
        result = subprocess.run(command, capture_output=True, text=True)
        if "\tEXACT\t" not in result.stdout:
            problems.append(f"{module} {row['offset']}: the harness refuses the body"
                            f" ({result.stdout.strip() or result.stderr.strip()})")
        else:
            parts = result.stdout.strip().split("\t")
            if args.refresh:
                row["object_sha256"] = parts[4] if len(parts) > 4 else ""
                row["source_sha256_lf"] = hashlib.sha256(
                    source.read_bytes()).hexdigest()
            if not args.quiet:
                print(f"  proved {module} {row['offset']} ({size} bytes)")

    for module, spans in sorted(occupied.items()):
        spans.sort()
        for (start, end, name), (next_start, _next_end, next_name) in zip(spans, spans[1:]):
            if next_start < end:
                problems.append(f"{module}: {name} and {next_name} overlap")

    if args.refresh:
        for table, rows in ((TABLE, rows), (BOOT_TABLE, boot_rows)):
            if not table.is_file():
                continue
            with table.open(encoding="utf-8", newline="") as handle:
                lines = [line for line in handle.read().splitlines()
                         if line and not line.startswith("#")]
            header = lines[0].split("\t")
            known = {row["module"] + "|" + row["offset"]: row for row in rows}
            out = [line for line in lines
                   if line.split("\t")[0] == "module"
                   or known.get(line.split("\t")[0] + "|" + line.split("\t")[1])
                   is None]
            for line in lines[1:]:
                values = line.split("\t")
                row = known.get(values[0] + "|" + values[1])
                if row is None:
                    continue
                values = [row.get(field, "") for field in header]
                out.append("\t".join(values))
            table.write_text("\n".join(out) + "\n", encoding="utf-8", newline="\n")
            print(f"  refreshed {table.relative_to(ROOT)}")

    print(f"{placements} placement(s), {len(sources)} source(s), {bytes_covered} "
          "byte(s) by placement")
    if problems:
        print("placement gate failed:")
        for problem in problems:
            print(f"  {problem}")
        return 1
    print("placement gate: every proved body owns its retail bytes")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
