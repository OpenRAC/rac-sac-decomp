#!/usr/bin/env python3
"""Tests of the function units, the level names and the published layout.

The synthetic tests build the few words they need; the repository test checks
the committed tables and sources against the unit tables (one definition per
function, linked at its placements, in its directory).
"""

from __future__ import annotations

import struct
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

import function_units as fu  # noqa: E402
import gen_progress_report as report  # noqa: E402
from level_names import MODULE_DIRS, SOURCE_DIRS, module_dir, module_order, module_tag  # noqa: E402

JR_RA = 0x03E00008
NOP = 0
BEQ = 0x10000003  # beq $zero, $zero, +3


def words(*values: int) -> bytes:
    return b"".join(struct.pack("<I", value) for value in values)


def piece(module: str, start: int, size: int, name: str = "", masked: str = "m",
          kind: str = "function") -> dict:
    return {"module": module, "start": start, "size": size, "kind": kind, "name": name,
            "masked": masked}


class LevelNamesTest(unittest.TestCase):
    def test_directories_and_tags(self) -> None:
        self.assertEqual(module_dir("FE.REL"), "frontend")
        self.assertEqual(module_dir("LEVEL1.REL"), "01_museum")
        self.assertEqual(module_dir("LEVEL32.REL"), "32_credits")
        self.assertEqual(module_tag("LEVEL7.REL"), "L07")
        self.assertEqual(module_tag("FE.REL"), "FE")
        self.assertLess(module_order("FE.REL"), module_order("LEVEL2.REL"))
        self.assertLess(module_order("LEVEL2.REL"), module_order("LEVEL10.REL"))
        self.assertEqual(len(set(MODULE_DIRS.values())), 31)
        self.assertIn("shared", SOURCE_DIRS)


class PiecesTest(unittest.TestCase):
    def test_trailing_zero_keeps_a_delay_slot(self) -> None:
        self.assertEqual(fu.trailing_zero(words(JR_RA, NOP, NOP, NOP), 0, 16), 8)
        self.assertEqual(fu.trailing_zero(words(1, BEQ, NOP), 0, 12), 0)
        self.assertEqual(fu.trailing_zero(words(1, 2), 0, 8), 0)

    def test_split_interval(self) -> None:
        data = words(1, JR_RA, NOP, NOP, NOP)
        self.assertEqual(fu.split_interval(data, 0, 20, 12, "f"),
                         [("function", 0, 12, "f"), ("padding", 12, 20, "")])
        data = words(1, JR_RA, NOP, 7, NOP)
        self.assertEqual(fu.split_interval(data, 0, 20, 12, "f"),
                         [("function", 0, 12, "f"), ("fragment", 12, 16, ""),
                          ("padding", 16, 20, "")])
        data = words(1, 2, NOP)
        self.assertEqual(fu.split_interval(data, 0, 12, None, "g"),
                         [("function", 0, 8, "g"), ("padding", 8, 12, "")])

    def test_identities(self) -> None:
        rows = [piece("LEVEL2.REL", 0x100, 8, "A"), piece("LEVEL1.REL", 0x108, 8, "A"),
                piece("LEVEL1.REL", 0x200, 8), piece("LEVEL1.REL", 0x300, 8),
                piece("LEVEL2.REL", 0x210, 8), piece("LEVEL1.REL", 0x400, 8, "B", "x")]
        fu.identify(rows)
        self.assertEqual(rows[0]["key"], rows[1]["key"])
        self.assertNotEqual(rows[2]["key"], rows[3]["key"])   # two copies in one module
        self.assertEqual(rows[2]["key"], rows[4]["key"])      # first copy of each module
        units = fu.level_units(rows, [])
        by_name = {unit["name"]: unit for unit in units}
        self.assertEqual(by_name["A"]["canonical"], "LEVEL1.REL:0x000108")
        self.assertEqual(by_name["A"]["home"], "shared")
        self.assertEqual(by_name["B"]["home"], "01_museum")
        self.assertIn("func_L01_000200", by_name)
        self.assertEqual(by_name["func_L01_000300"]["home"], "01_museum")

    def test_one_source_per_function(self) -> None:
        rows = [piece("LEVEL1.REL", 0x100, 8, "A"), piece("LEVEL2.REL", 0x100, 8, "A")]
        fu.identify(rows)
        accepted = [{"module": "LEVEL1.REL", "offset": "0x100", "size": "8", "source": "x.c"},
                    {"module": "LEVEL2.REL", "offset": "0x100", "size": "8", "source": "y.c"}]
        with self.assertRaises(ValueError):
            fu.level_units(rows, accepted)
        units = fu.level_units(rows, accepted[:1])
        self.assertEqual((units[0]["matched_placements"], units[0]["placements"]), (1, 2))
        with self.assertRaises(ValueError):
            fu.level_units(rows, [{"module": "LEVEL1.REL", "offset": "0x100", "size": "4",
                                   "source": "x.c"}])

    def test_file_stems(self) -> None:
        self.assertEqual(fu.file_stem("ACTOR_Update__Fv"), "ACTOR_Update__Fv")
        ctor = "_GLOBAL_$I$c__dev_projects_SAC_Src_Core__All_Core.cppHbbaaa"
        self.assertEqual(fu.c_identifier(ctor), "_GLOBAL_$I$c__dev_projects_SAC_Src_Core__All_Core_cppHbbaaa")
        long_name = "X" * 197
        stem = fu.file_stem(long_name)
        self.assertEqual(len(stem), fu.FILE_STEM_LIMIT)
        self.assertNotEqual(stem, fu.file_stem("X" * 196))

    def test_file_names_ignore_case(self) -> None:
        rows = [piece("LEVEL1.REL", 0x100, 8, "Foo", "a"), piece("LEVEL1.REL", 0x200, 8, "foo", "b"),
                piece("LEVEL2.REL", 0x300, 8, "Foo", "c")]
        fu.identify(rows)
        files = sorted(unit["file"] for unit in fu.level_units(rows, []))
        self.assertEqual(files, ["Foo_L01_000100", "Foo_L02", "foo_L01_000200"])


class DefinitionsTest(unittest.TestCase):
    def test_definitions(self) -> None:
        text = ("/* f(x) { */\nstatic int helper(int a) { return a; }\n"
                "typedef struct S { int a; } S;\nint g(int x)\n{\n    return helper(x);\n}\n")
        self.assertEqual(fu.definitions(text), [(True, "helper"), (False, "g")])
        self.assertEqual(fu.defined_function(text), "g")

    def test_newlib_and_pointer_definitions(self) -> None:
        newlib = ("#ifdef __STDC__\n\tfloat scalbnf (float x, int n)\n#else\n"
                  "\tfloat scalbnf (x,n)\n\tfloat x; int n;\n#endif\n{\n\treturn x;\n}\n")
        self.assertEqual(fu.defined_names(newlib), {"scalbnf"})
        pointer = "void (*func_00116FA8(void (*handler)(void)))(void) {\n    return 0;\n}\n"
        self.assertEqual(fu.defined_names(pointer), {"func_00116FA8"})
        macro = "#define SQ(x) \\\n  ((x) * (x))\nint f(int a)\n{\n    return SQ(a);\n}\n"
        self.assertEqual(fu.defined_names(macro), {"f"})

    def test_old_style_definition(self) -> None:
        text = "void\nBfree(ptr, v)\n    struct _reent *ptr;\n    struct _Bigint *v;\n{\n}\n"
        self.assertEqual(fu.defined_names(text), {"Bfree"})


class ReportTest(unittest.TestCase):
    def test_unit_tiles(self) -> None:
        tile = report.unit("levels/shared/A", 64, 1.0, True, "shared", "src/levels/shared/A.c", "A")
        self.assertEqual(tile["measures"]["matched_code"], "64")
        self.assertEqual(tile["functions"][0]["name"], "A")
        partial = report.unit("levels/shared/B", 64, 0.5, True, "shared")
        self.assertNotIn("matched_code", partial["measures"])
        self.assertEqual(partial["measures"]["fuzzy_match_percent"], 50.0)
        totals = report.totals([tile, partial])
        self.assertEqual((totals["total_code"], totals["matched_code"]), ("128", "64"))
        self.assertEqual(totals["fuzzy_match_percent"], 75.0)


class ProfileCellTest(unittest.TestCase):
    def test_flags_per_source(self) -> None:
        from placement_table import cell_flags, harness_options
        self.assertEqual(cell_flags("gnu-ee-20261015:-O2 -G0", "x"), "-quiet -O2 -G0")
        self.assertEqual(cell_flags("divpad:-O2 -G0 -fno-gcse", "x"), "-quiet -O2 -G0 -fno-gcse")
        self.assertEqual(cell_flags("divpad", "-quiet -O2 -G0"), "-quiet -O2 -G0")
        profiles = {"p": {"cpp": "c", "cc1": "k", "as": "a", "flags": "-quiet -O2 -G0", "work": "w"}}
        self.assertEqual(harness_options("p:-O2 -G0 -fno-gcse", profiles),
                         ["--cpp", "c", "--cc1", "k", "--flags", "-quiet -O2 -G0 -fno-gcse",
                          "--work", "w", "--as", "a"])
        self.assertEqual(harness_options("unknown:-O2", profiles), [])


class RepositoryTest(unittest.TestCase):
    def test_tables_and_sources_follow_the_units(self) -> None:
        self.assertEqual(fu.invariants(), [])


if __name__ == "__main__":
    unittest.main()
