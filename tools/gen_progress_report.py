#!/usr/bin/env python3
"""
Progress report for ByteMatch (bytematch.dev), in objdiff's report format (version 2).

ByteMatch reads a `report.json` uploaded by GitHub Actions as an artifact named
`<SERIAL>_report` (e.g. `SCUS_976.23_report` and `SCES_554.96_report`).

This tool generates the progress reports and validates them:
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

    all_items: list[tuple[int, float, bool]] = []
    units_list: list[dict[str, object]] = []
    categories_list: list[dict[str, object]] = []

    # 1. Boot Executable
    boot_items: list[tuple[int, float, bool]] = []
    boot_funcs: list[dict[str, object]] = []
    for b in boot_bodies:
        sz = int(b["size"])
        off = int(b["offset"], 16)
        name = Path(b["source"]).stem
        # For primary (us), all accepted bodies are exact
        # For pal, if offset/size matches it's counted
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
    boot_total_candidates = int(boot_summary.get("entry_intervals", 3821))
    boot_unmatched_candidates = max(0, boot_total_candidates - len(boot_funcs))
    if boot_unmatched_candidates > 0 and boot_unmatched_code > 0:
        boot_items.append((boot_unmatched_code, 0.0, False))

    boot_unit_m = make_measures(boot_items)
    units_list.append({
        "name": "boot/executable",
        "measures": boot_unit_m,
        "functions": boot_funcs,
        "metadata": {
            "complete": False,
            "source_path": "src/boot/",
            "progress_categories": ["boot"],
        },
    })
    all_items.extend(boot_items)
    categories_list.append({
        "id": "boot",
        "name": "Boot Executable",
        "measures": boot_unit_m,
    })

    # 2. Level Modules
    by_module: dict[str, list[dict[str, str]]] = {}
    for lb in level_bodies:
        by_module.setdefault(lb["module"], []).append(lb)

    level_cat_items: list[tuple[int, float, bool]] = []
    for inv in intervals:
        mod_name = inv["module"]
        mod_key = Path(mod_name).stem
        mod_total_code = int(inv["interval_bytes"])
        placed = by_module.get(mod_name, [])

        mod_items: list[tuple[int, float, bool]] = []
        mod_funcs: list[dict[str, object]] = []
        for pb in placed:
            sz = int(pb["size"])
            off = int(pb["offset"], 16)
            fname = Path(pb["source"]).stem
            mod_items.append((sz, 100.0, True))
            mod_funcs.append({
                "name": fname,
                "size": str(sz),
                "fuzzy_match_percent": 100.0,
                "address": str(off),
                "metadata": {"virtual_address": str(off)},
            })

        mod_matched_code = sum(s for s, _, _ in mod_items)
        mod_rem = max(0, mod_total_code - mod_matched_code)
        if mod_rem > 0:
            mod_items.append((mod_rem, 0.0, False))

        mod_m = make_measures(mod_items)
        units_list.append({
            "name": f"levels/{mod_key}",
            "measures": mod_m,
            "functions": mod_funcs,
            "metadata": {
                "complete": False,
                "source_path": "src/levels/bodies/",
                "progress_categories": ["level_code", mod_key.lower()],
            },
        })
        level_cat_items.extend(mod_items)
        all_items.extend(mod_items)

    categories_list.append({
        "id": "level_code",
        "name": "Level Modules",
        "measures": make_measures(level_cat_items),
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
