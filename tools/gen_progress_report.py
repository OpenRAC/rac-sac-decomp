#!/usr/bin/env python3
"""
Progress report for ByteMatch (bytematch.dev), in objdiff's report format (version 2).

ByteMatch reads a `report.json` uploaded by GitHub Actions as an artifact named
`<SERIAL>_report` (e.g. `SCUS_976.23_report` and `SCES_554.96_report`).

Following the OpenRAC methodology for relocatable multi-module games
(such as OpenRAC/rac5-sm-decomp for Size Matters), progress is measured
against an optimistically deduplicated code denominator:
  1. Boot .text (measured scope)
  2. Frontend (FE.REL candidate code interval)
  3. Level modules (optimistically deduplicated candidate estimate)

This prevents 31x static linking duplication from falsely reporting ~70 MiB
of code for a spin-off title whose true deduplicated code is ~7.28 MB.

Usage:
  python3 tools/gen_progress_report.py            # write progress/report.json and progress/pal/report.json
  python3 tools/gen_progress_report.py --check    # CI: fail if the committed reports are out of date
  python3 tools/gen_progress_report.py --version pal

The report holds names, addresses, sizes and percentages -- no retail bytes.
"""

from __future__ import annotations

import argparse
import csv
import json
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

import versions  # noqa: E402

BODIES = ROOT / "config/levels/bodies.tsv"
BOOT_BODIES = ROOT / "config/boot/bodies.tsv"
INTERVALS = ROOT / "config/levels/code_intervals.tsv"
BOOT_SUMMARY = ROOT / "config/boot/summary.json"
FUNCTION_INVENTORY_SUMMARY = ROOT / "config/levels/function_inventory_summary.json"


def read_tsv(path: Path) -> list[dict[str, str]]:
    if not path.is_file():
        return []
    with path.open(encoding="utf-8", newline="") as f:
        return list(csv.DictReader((line for line in f if not line.startswith("#")), delimiter="\t"))


def make_measures(
    items: list[tuple[int, float, bool]],
    units: int = 0,
    complete_units: int = 0,
    complete_code: int = 0,
) -> dict[str, object]:
    """items: (size, fuzzy%, finished). uint64 fields are strings as in protobuf JSON."""
    total = sum(s for s, _, _ in items)
    matched = sum(s for s, _, e in items if e)
    nfun = len(items)
    nmatch = sum(1 for _, _, e in items if e)
    fuzzy = sum(s * p for s, p, _ in items) / total if total else 0.0
    m: dict[str, object] = {
        "fuzzy_match_percent": fuzzy,
        "total_code": str(total),
        "matched_code": str(matched),
        "matched_code_percent": 100.0 * matched / total if total else 0.0,
        "total_functions": nfun,
        "matched_functions": nmatch,
        "matched_functions_percent": 100.0 * nmatch / nfun if nfun else 0.0,
        "complete_code": str(complete_code),
        "complete_code_percent": 100.0 * complete_code / total if total else 0.0,
    }
    if units:
        m["total_units"] = units
        m["complete_units"] = complete_units
    return m


def generate_report(v: versions.Version) -> dict[str, object]:
    boot_bodies = read_tsv(BOOT_BODIES)
    level_bodies = read_tsv(BODIES)
    intervals = read_tsv(INTERVALS)
    boot_summary = json.loads(BOOT_SUMMARY.read_text(encoding="utf-8")) if BOOT_SUMMARY.is_file() else {}
    inv_summary = (json.loads(FUNCTION_INVENTORY_SUMMARY.read_text(encoding="utf-8"))
                   if FUNCTION_INVENTORY_SUMMARY.is_file() else {})

    all_items: list[tuple[int, float, bool]] = []
    units_list: list[dict[str, object]] = []
    categories_list: list[dict[str, object]] = []

    # 1. Boot Executable (measured scope)
    boot_unique: dict[str, dict[str, str]] = {}
    for b in boot_bodies:
        boot_unique.setdefault(b["source"], b)

    boot_items: list[tuple[int, float, bool]] = []
    boot_funcs: list[dict[str, object]] = []
    for src, b in sorted(boot_unique.items(), key=lambda kv: int(kv[1]["offset"], 16)):
        sz = int(b["size"])
        off = int(b["offset"], 16)
        name = Path(src).stem
        boot_items.append((sz, 100.0, True))
        boot_funcs.append({
            "name": name,
            "size": str(sz),
            "fuzzy_match_percent": 100.0,
            "address": str(off - 0x100000),
            "metadata": {"virtual_address": str(off)},
        })

    boot_total_code = int(boot_summary.get("text_bytes", 650932))
    boot_matched_code = sum(s for s, _, _ in boot_items)
    boot_unmatched_code = max(0, boot_total_code - boot_matched_code)
    if boot_unmatched_code > 0:
        boot_items.append((boot_unmatched_code, 0.0, False))

    boot_unit_m = make_measures(boot_items)
    units_list.append({
        "name": "boot/executable",
        "measures": boot_unit_m,
        "functions": boot_funcs,
        "metadata": {
            "complete": False,
            "source_path": "src/boot/bodies/",
            "progress_categories": ["boot_measured"],
        },
    })
    all_items.extend(boot_items)
    categories_list.append({
        "id": "boot_measured",
        "name": "Boot .text (measured scope)",
        "measures": boot_unit_m,
    })

    # 2. Frontend (FE.REL candidate code interval)
    fe_bodies = [b for b in level_bodies if b["module"] == "FE.REL"]
    fe_unique: dict[str, dict[str, str]] = {}
    for b in fe_bodies:
        fe_unique.setdefault(b["source"], b)

    fe_items: list[tuple[int, float, bool]] = []
    fe_funcs: list[dict[str, object]] = []
    for src, b in sorted(fe_unique.items(), key=lambda kv: int(kv[1]["offset"], 16)):
        sz = int(b["size"])
        off = int(b["offset"], 16)
        name = Path(src).stem
        fe_items.append((sz, 100.0, True))
        fe_funcs.append({
            "name": name,
            "size": str(sz),
            "fuzzy_match_percent": 100.0,
            "address": str(off),
            "metadata": {"virtual_address": str(off)},
        })

    fe_interval = next((int(inv["interval_bytes"]) for inv in intervals if inv["module"] == "FE.REL"), 983040)
    fe_total_code = fe_interval
    fe_matched_code = sum(s for s, _, _ in fe_items)
    fe_unmatched_code = max(0, fe_total_code - fe_matched_code)
    if fe_unmatched_code > 0:
        fe_items.append((fe_unmatched_code, 0.0, False))

    fe_unit_m = make_measures(fe_items)
    units_list.append({
        "name": "levels/FE",
        "measures": fe_unit_m,
        "functions": fe_funcs,
        "metadata": {
            "complete": False,
            "source_path": "src/levels/bodies/",
            "progress_categories": ["frontend_candidate"],
        },
    })
    all_items.extend(fe_items)
    categories_list.append({
        "id": "frontend_candidate",
        "name": "Frontend (candidate code interval)",
        "measures": fe_unit_m,
    })

    # 3. Level Modules (optimistically deduplicated estimate)
    masked_total = int(inv_summary.get("relocation_masked_candidate_bytes", 6628908))
    levels_total_code = max(0, masked_total - fe_total_code)

    other_level_bodies = [b for b in level_bodies if b["module"] != "FE.REL"]
    levels_unique: dict[str, dict[str, str]] = {}
    for b in other_level_bodies:
        if b["source"] not in fe_unique:
            levels_unique.setdefault(b["source"], b)

    levels_items: list[tuple[int, float, bool]] = []
    levels_funcs: list[dict[str, object]] = []
    for src, b in sorted(levels_unique.items(), key=lambda kv: int(kv[1]["offset"], 16)):
        sz = int(b["size"])
        off = int(b["offset"], 16)
        name = Path(src).stem
        levels_items.append((sz, 100.0, True))
        levels_funcs.append({
            "name": name,
            "size": str(sz),
            "fuzzy_match_percent": 100.0,
            "address": str(off),
            "metadata": {"virtual_address": str(off)},
        })

    levels_matched_code = sum(s for s, _, _ in levels_items)
    levels_unmatched_code = max(0, levels_total_code - levels_matched_code)
    if levels_unmatched_code > 0:
        levels_items.append((levels_unmatched_code, 0.0, False))

    levels_unit_m = make_measures(levels_items)
    units_list.append({
        "name": "levels/common",
        "measures": levels_unit_m,
        "functions": levels_funcs,
        "metadata": {
            "complete": False,
            "source_path": "src/levels/bodies/",
            "progress_categories": ["levels_optimistic"],
        },
    })
    all_items.extend(levels_items)
    categories_list.append({
        "id": "levels_optimistic",
        "name": "Levels (optimistic masked-shape estimate)",
        "measures": levels_unit_m,
    })

    return {
        "version": 2,
        "measures": make_measures(all_items, units=len(units_list), complete_units=0),
        "units": units_list,
        "categories": categories_list,
    }


def write_reports() -> None:
    us_v = versions.get("us")
    pal_v = versions.get("pal")

    us_report = generate_report(us_v)
    pal_report = generate_report(pal_v)

    # Primary report is progress/report.json (and progress/us/report.json)
    prog_dir = ROOT / "progress"
    prog_dir.mkdir(parents=True, exist_ok=True)
    (prog_dir / "us").mkdir(parents=True, exist_ok=True)
    (prog_dir / "pal").mkdir(parents=True, exist_ok=True)

    us_json = json.dumps(us_report, indent=1) + "\n"
    pal_json = json.dumps(pal_report, indent=1) + "\n"

    (prog_dir / "report.json").write_text(us_json, encoding="utf-8")
    (prog_dir / "us" / "report.json").write_text(us_json, encoding="utf-8")
    (prog_dir / "pal" / "report.json").write_text(pal_json, encoding="utf-8")

    # Functional list placeholder
    (prog_dir / "functional.json").write_text("[]\n", encoding="utf-8")

    m_us = us_report["measures"]
    print(f"wrote progress/report.json ({us_v.id}): {m_us['matched_code_percent']:.2f}% code ({m_us['matched_code']}/{m_us['total_code']} bytes), {m_us['matched_functions']} functions")
    m_pal = pal_report["measures"]
    print(f"wrote progress/pal/report.json ({pal_v.id}): {m_pal['matched_code_percent']:.2f}% code ({m_pal['matched_code']}/{m_pal['total_code']} bytes), {m_pal['matched_functions']} functions")


def check_reports() -> bool:
    us_v = versions.get("us")
    pal_v = versions.get("pal")

    us_path = ROOT / "progress" / "report.json"
    pal_path = ROOT / "progress" / "pal" / "report.json"

    if not us_path.is_file() or not pal_path.is_file():
        print("progress reports are missing; run 'python3 tools/gen_progress_report.py'", file=sys.stderr)
        return False

    current_us = json.dumps(generate_report(us_v), indent=1) + "\n"
    current_pal = json.dumps(generate_report(pal_v), indent=1) + "\n"

    committed_us = us_path.read_text(encoding="utf-8")
    committed_pal = pal_path.read_text(encoding="utf-8")

    if current_us != committed_us:
        print("progress/report.json is out of date with src/ and placement tables; re-run 'python3 tools/gen_progress_report.py'", file=sys.stderr)
        return False

    if current_pal != committed_pal:
        print("progress/pal/report.json is out of date; re-run 'python3 tools/gen_progress_report.py'", file=sys.stderr)
        return False

    print("progress reports are current with src/ and placement tables")
    return True


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--check", action="store_true", help="verify that committed reports are current")
    parser.add_argument("--version", choices=("us", "pal"), help="generate report for specific version only")
    args = parser.parse_args()

    if args.check:
        sys.exit(0 if check_reports() else 1)

    write_reports()


if __name__ == "__main__":
    main()
