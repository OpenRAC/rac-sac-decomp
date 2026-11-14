#!/usr/bin/env python3
"""
Progress report for ByteMatch (bytematch.dev), in objdiff's report format (version 2).

ByteMatch reads a `report.json` uploaded by GitHub Actions as an artifact named
`<SERIAL>_report` (`SCUS_976.23_report` and `SCES_554.96_report`). Its map draws
one tile per unit, grouped in folders by the unit names, sized by code bytes and
coloured by how much of the unit is matched.

The units are the candidate functions of `tools/function_units.py`, one each:
  - boot/<func_ADDRESS>: the candidate functions of the boot .text;
  - levels/<directory>/<name>: the level functions, each counted once however
    many modules carry it, in the directory where src/levels keeps its source
    (shared/ for a function found in several modules).
Zero alignment padding is not code. A unit is matched when one C source is
linked at every placement of its function; a source linked at some of them
gives a partial (fuzzy) match. The headline measures are the sums of the units,
so the map, the categories and the totals agree. These are candidate functions,
not a reviewed function catalogue.

The PAL release has no gate yet: its report keeps the US denominator per
directory and no matched C.

Usage:
  python3 tools/gen_progress_report.py            # write progress/report.json and progress/pal/report.json
  python3 tools/gen_progress_report.py --check    # CI: fail if the committed reports are out of date

The report holds names, addresses, sizes and percentages -- no retail bytes.
"""

from __future__ import annotations

import argparse
import csv
import json
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

import versions  # noqa: E402
from level_names import LEVEL_NAMES, MODULE_DIRS, SHARED  # noqa: E402

LEVEL_UNITS = ROOT / "config/levels/units.tsv"
BOOT_UNITS = ROOT / "config/boot/units.tsv"
REPORTS = {"us": ROOT / "progress/report.json", "pal": ROOT / "progress/pal/report.json"}


def read_tsv(path: Path) -> list[dict[str, str]]:
    if not path.is_file():
        return []
    with path.open(encoding="utf-8", newline="") as f:
        return list(csv.DictReader((line for line in f if not line.startswith("#")), delimiter="\t"))


def make_measures(total: int, matched: int, fuzzy_bytes: float, functions: int,
                  matched_functions: int, units: int) -> dict[str, object]:
    """uint64 fields are strings, as in protobuf JSON."""
    if not (0 <= matched <= total and 0 <= matched_functions <= functions):
        raise ValueError("matched code or functions exceed their totals")
    return {
        "fuzzy_match_percent": 100.0 * fuzzy_bytes / total if total else 0.0,
        "total_code": str(total),
        "matched_code": str(matched),
        "matched_code_percent": 100.0 * matched / total if total else 0.0,
        "total_functions": functions,
        "matched_functions": matched_functions,
        "matched_functions_percent": 100.0 * matched_functions / functions if functions else 0.0,
        "complete_code": "0",
        "complete_code_percent": 0.0,
        "total_units": units,
        "complete_units": 0,
    }


def unit(name: str, size: int, fraction: float, is_function: bool, category: str,
         source: str = "", function: str = "") -> dict[str, object]:
    """One map tile; fields that are zero are left out, as protobuf JSON allows."""
    matched = fraction >= 1.0
    measures: dict[str, object] = {"total_code": str(size)}
    if fraction:
        measures["fuzzy_match_percent"] = 100.0 * fraction
    if matched:
        measures["matched_code"] = str(size)
        measures["matched_code_percent"] = 100.0
    if is_function:
        measures["total_functions"] = 1
        if matched:
            measures["matched_functions"] = 1
            measures["matched_functions_percent"] = 100.0
    item: dict[str, object] = {"name": name, "measures": measures}
    if matched and function:
        item["functions"] = [{"name": function, "size": str(size), "fuzzy_match_percent": 100.0}]
    metadata: dict[str, object] = {"progress_categories": [category]}
    if source:
        metadata["source_path"] = source
    item["metadata"] = metadata
    return item


def boot_units() -> list[dict[str, object]]:
    units = []
    for row in read_tsv(BOOT_UNITS):
        matched = row["matched"] == "1"
        units.append(unit(f"boot/{row['name']}", int(row["size"]), 1.0 if matched else 0.0,
                          row["kind"] == "function", "boot", row["source"], row["name"]))
    return units


def level_units() -> list[dict[str, object]]:
    units = []
    for row in read_tsv(LEVEL_UNITS):
        placements, matched = int(row["placements"]), int(row["matched_placements"])
        source = f"src/levels/{row['home']}/{row['file']}.c" if matched else ""
        units.append(unit(f"levels/{row['home']}/{row['file']}", int(row["size"]),
                          matched / placements, row["kind"] == "function", row["home"],
                          source, row["name"]))
    return units


def totals(units: list[dict[str, object]]) -> dict[str, object]:
    total = matched = functions = matched_functions = 0
    fuzzy = 0.0
    for item in units:
        m = item["measures"]
        size = int(m["total_code"])
        total += size
        matched += int(m.get("matched_code", 0))
        fuzzy += size * float(m.get("fuzzy_match_percent", 0.0)) / 100.0
        functions += int(m.get("total_functions", 0))
        matched_functions += int(m.get("matched_functions", 0))
    return make_measures(total, matched, fuzzy, functions, matched_functions, len(units))


def category(category_id: str, name: str, units: list[dict[str, object]]) -> dict[str, object]:
    return {"id": category_id, "name": name, "measures": totals(units)}


def directory_titles() -> dict[str, tuple[str, str]]:
    """Directory -> (category id, title) of each module."""
    out = {}
    for module, directory in MODULE_DIRS.items():
        slug, title = LEVEL_NAMES[module.removesuffix(".REL")]
        out[directory] = (slug, title if module in title else f"{title} ({module})")
    return out


def generate_report(v: versions.Version) -> dict[str, object]:
    boot = boot_units()
    levels = level_units()
    titles = directory_titles()
    if v.key != "us":
        # The bodies are proved on the USA programs only: the other release keeps the
        # same denominator per directory and no matched C until it has its own gate.
        sizes: dict[str, tuple[int, int]] = defaultdict(lambda: (0, 0))
        for item in levels:
            home = item["metadata"]["progress_categories"][0]
            code, functions = sizes[home]
            sizes[home] = (code + int(item["measures"]["total_code"]),
                           functions + int(item["measures"].get("total_functions", 0)))
        boot_total = sum(int(item["measures"]["total_code"]) for item in boot)
        boot_functions = sum(int(item["measures"].get("total_functions", 0)) for item in boot)
        boot = [{"name": "boot/executable",
                 "measures": {"total_code": str(boot_total), "total_functions": boot_functions},
                 "metadata": {"progress_categories": ["boot"]}}]
        levels = [{"name": f"levels/{home}",
                   "measures": {"total_code": str(code), "total_functions": functions},
                   "metadata": {"progress_categories": [home]}}
                  for home, (code, functions) in sorted(sizes.items())]
    categories = [category("boot", f"Boot executable ({v.exe})", boot),
                  category("levels", "Level modules (each function counted once)", levels)]
    by_home: dict[str, list[dict[str, object]]] = defaultdict(list)
    for item in levels:
        by_home[item["metadata"]["progress_categories"][0]].append(item)
    for directory, (slug, title) in titles.items():
        categories.append(category(slug, f"{title}: functions of this module only",
                                   by_home.get(directory, [])))
    categories.append(category(SHARED, "Level functions shared by several modules",
                               by_home.get(SHARED, [])))
    return {
        "version": 2,
        "measures": totals(boot + levels),
        "units": boot + levels,
        "categories": categories,
    }


def dumps(report: dict[str, object]) -> str:
    """JSON with one unit and one category per line, so diffs stay readable."""
    def line(item: object) -> str:
        return json.dumps(item, separators=(",", ":"))
    return "\n".join([
        "{",
        f' "version": {report["version"]},',
        f' "measures": {line(report["measures"])},',
        ' "units": [',
        ",\n".join("  " + line(item) for item in report["units"]),
        " ],",
        ' "categories": [',
        ",\n".join("  " + line(item) for item in report["categories"]),
        " ]",
        "}",
    ]) + "\n"


def write_reports() -> None:
    for key, path in REPORTS.items():
        v = versions.get(key)
        report = generate_report(v)
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(dumps(report), encoding="utf-8", newline="\n")
        m = report["measures"]
        print(f"wrote {path.relative_to(ROOT).as_posix()} ({v.id}): "
              f"{m['matched_code_percent']:.2f}% code ({m['matched_code']}/{m['total_code']} "
              f"bytes), {m['matched_functions']}/{m['total_functions']} functions, "
              f"{m['total_units']} units")
    (ROOT / "progress/functional.json").write_text("[]\n", encoding="utf-8", newline="\n")


def check_reports() -> bool:
    for key, path in REPORTS.items():
        if not path.is_file():
            print("progress reports are missing; run 'python3 tools/gen_progress_report.py'",
                  file=sys.stderr)
            return False
        if dumps(generate_report(versions.get(key))) != path.read_text(encoding="utf-8"):
            print(f"{path.relative_to(ROOT).as_posix()} is out of date; "
                  "re-run 'python3 tools/gen_progress_report.py'", file=sys.stderr)
            return False
    print("progress reports are current with the unit tables")
    return True


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("--check", action="store_true",
                        help="verify that committed reports are current")
    args = parser.parse_args()
    if args.check:
        sys.exit(0 if check_reports() else 1)
    write_reports()


if __name__ == "__main__":
    main()
