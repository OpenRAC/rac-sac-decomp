"""Names of the level modules: report slugs, titles, source directories and tags.

``LEVEL_NAMES`` maps a module stem to (report slug, in-game title).  The level
sources live in ``src/levels/<directory>/`` -- ``frontend`` for FE.REL and
``<NN>_<name>`` for LEVEL<NN>.REL -- or in ``src/levels/shared/`` when their
function is found in several modules, the layout of the sibling projects.
Local names of a module carry its tag (``FE``, ``L01`` ... ``L32``).
"""

from __future__ import annotations

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
SHARED = "shared"


def stem(module: str) -> str:
    """FE.REL -> FE, LEVEL7.REL -> LEVEL7."""
    return module.upper().removesuffix(".REL")


def module_tag(module: str) -> str:
    """The tag of a module in local names: FE, L01 ... L32."""
    name = stem(module)
    return "FE" if name == "FE" else f"L{int(name.removeprefix('LEVEL')):02d}"


def module_order(module: str) -> int:
    """FE first, then the levels by number: the order of canonical placements."""
    tag = module_tag(module)
    return 0 if tag == "FE" else int(tag[1:])


def module_dir(module: str) -> str:
    """The source directory of a module: frontend, 01_museum ... 32_credits."""
    slug, _title = LEVEL_NAMES[stem(module)]
    if slug == "fe_frontend":
        return "frontend"
    number, name = slug.removeprefix("level").split("_", 1)
    return f"{int(number):02d}_{name}"


MODULE_DIRS = {f"{name}.REL": module_dir(name) for name in LEVEL_NAMES}
SOURCE_DIRS = frozenset(MODULE_DIRS.values()) | {SHARED}
