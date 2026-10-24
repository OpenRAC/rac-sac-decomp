#!/usr/bin/env python3
"""
Progress report for ByteMatch (bytematch.dev), in objdiff's report format (version 2).

ByteMatch reads a `report.json` uploaded by GitHub Actions as an artifact named
`<SERIAL>_report` (e.g. `SCUS_976.23_report` and `SCES_554.96_report`).

Following OpenRAC methodology:
  - Each level and the boot executable is tracked individually as its own unit
    and category named after the level in the game (e.g. levels/level1_museum),
    carrying its placed functions.
  - Overall headline project measures are deduplicated across shared sources,
    preventing 31x static linking duplication from falsely reporting ~70 MiB
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

LEVEL_NAMES: dict[str, tuple[str, str]] = {
    "FE": ("fe_frontend", "Frontend (FE.REL)"),
    "LEVEL1": ("level1_museum", "Level 1: Boltaire Museum"),
    "LEVEL2": ("level2_timing", "Level 2: Museum Security"),
    "LEVEL3": ("level3_prison", "Level 3: Prison Cells"),
    "LEVEL4": ("level4_skyscrapers", "Level 4: Asyanica Rooftops"),
    "LEVEL5": ("level5_giant", "Level 5: Asyanica Jack"),
    "LEVEL7": ("level7_countess", "Level 7: Glaciara Villa"),
    "LEVEL8": ("level8_snowboard", "Level 8: Glaciara Slopes"),
    "LEVEL9": ("level9_cafeteria", "Level 9: Prison Mess Hall"),
    "LEVEL10": ("level10_carnival", "Level 10: Rionosis Carnival"),
    "LEVEL11": ("level11_gondola", "Level 11: Rionosis Gondola"),
    "LEVEL13": ("level13_casino", "Level 13: Le Paradis Casino"),
    "LEVEL14": ("level14_yard", "Level 14: Prison Exercise Yard"),
    "LEVEL15": ("level15_highstakes", "Level 15: Casino High Stakes"),
    "LEVEL16": ("level16_lab", "Level 16: Venantonio Labs"),
    "LEVEL17": ("level17_race", "Level 17: Venantonio Canals"),
    "LEVEL18": ("level18_qwark", "Level 18: Madam Butterqwark"),
    "LEVEL19": ("level19_foundry", "Level 19: Fort Sprocket Foundry"),
    "LEVEL20": ("level20_gadgebot", "Level 20: Fort Sprocket A-Eye"),
    "LEVEL21": ("level21_shower", "Level 21: Prison Showers"),
    "LEVEL22": ("level22_graveyard", "Level 22: Spaceship Graveyard"),
    "LEVEL23": ("level23_qwark", "Level 23: Saint Qwark"),
    "LEVEL24": ("level24_giantclank", "Level 24: Giant Clank"),
    "LEVEL25": ("level25_escapeyard", "Level 25: Prison Breakout"),
    "LEVEL26": ("level26_damrace", "Level 26: Hydrano Dam"),
    "LEVEL27": ("level27_qwarkdam", "Level 27: Hydrano Qwark"),
    "LEVEL28": ("level28_gadgebot", "Level 28: Hydrano Lock"),
    "LEVEL29": ("level29_base", "Level 29: Hydrano Bunker"),
    "LEVEL30": ("level30_boss", "Level 30: Klunk's Lair"),
    "LEVEL31": ("level31_treehouse", "Level 31: HIG Treehouse"),
    "LEVEL32": ("level32_credits", "Level 32: HIG Credits"),
}


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

    units_list: list[dict[str, object]] = []
    categories_list: list[dict[str, object]] = []

    # 1. Boot Executable
    boot_items: list[tuple[int, float, bool]] = []
    boot_funcs: list[dict[str, object]] = []
    for b in boot_bodies:
        sz = int(b["size"])
        off = int(b["offset"], 16)
        name = Path(b["source"]).stem
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
            "progress_categories": ["boot"],
        },
    })
    categories_list.append({
        "id": "boot",
        "name": "Boot Executable",
        "measures": boot_unit_m,
    })

    # 2. Level Modules tracked individually (with friendly in-game level names)
    by_module: dict[str, list[dict[str, str]]] = {}
    for lb in level_bodies:
        by_module.setdefault(lb["module"], []).append(lb)

    level_cat_items: list[tuple[int, float, bool]] = []
    for inv in intervals:
        mod_name = inv["module"]
        mod_key = Path(mod_name).stem
        mod_total_code = int(inv["interval_bytes"])
        placed = by_module.get(mod_name, [])
        slug, friendly_title = LEVEL_NAMES.get(mod_key, (mod_key.lower(), f"Module {mod_name}"))

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
            "name": f"levels/{slug}",
            "measures": mod_m,
            "functions": mod_funcs,
            "metadata": {
                "complete": False,
                "source_path": "src/levels/bodies/",
                "progress_categories": ["level_code", slug],
            },
        })
        level_cat_items.extend(mod_items)

        category_name = f"{friendly_title} ({mod_name})" if not friendly_title.endswith(")") else friendly_title
        categories_list.append({
            "id": slug,
            "name": category_name,
            "measures": mod_m,
        })

    # Combined level category (all placements)
    categories_list.insert(1, {
        "id": "level_code",
        "name": "Level Modules (Combined Placements)",
        "measures": make_measures(level_cat_items),
    })

    # Overall project measures: deduplicated across unique sources
    dedup_sources: dict[str, int] = {}
    for b in boot_bodies + level_bodies:
        dedup_sources[b["source"]] = int(b["size"])

    dedup_matched_code = sum(dedup_sources.values())
    masked_total = int(inv_summary.get("relocation_masked_candidate_bytes", 6628908))
    dedup_total_code = boot_total_code + masked_total
    overall_pct = 100.0 * dedup_matched_code / dedup_total_code if dedup_total_code else 0.0

    n_matched_functions = len(dedup_sources)
    n_total_functions = n_matched_functions + len(units_list)
    overall_m = {
        "fuzzy_match_percent": overall_pct,
        "total_code": str(dedup_total_code),
        "matched_code": str(dedup_matched_code),
        "matched_code_percent": overall_pct,
        "total_functions": n_total_functions,
        "matched_functions": n_matched_functions,
        "matched_functions_percent": 100.0 * n_matched_functions / n_total_functions if n_total_functions else 0.0,
        "complete_code": "0",
        "complete_code_percent": 0.0,
        "total_units": len(units_list),
        "complete_units": 0,
    }

    return {
        "version": 2,
        "measures": overall_m,
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
    print(f"wrote progress/report.json ({us_v.id}): {m_us['matched_code_percent']:.2f}% code ({m_us['matched_code']}/{m_us['total_code']} bytes), {m_us['matched_functions']} functions, {m_us['total_units']} individual units")
    m_pal = pal_report["measures"]
    print(f"wrote progress/pal/report.json ({pal_v.id}): {m_pal['matched_code_percent']:.2f}% code ({m_pal['matched_code']}/{m_pal['total_code']} bytes), {m_pal['matched_functions']} functions, {m_pal['total_units']} individual units")


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
