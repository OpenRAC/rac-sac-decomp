#!/usr/bin/env python3
"""Unit tests of the repository tools, on synthetic data only.

No game byte is read here: the tests build the small structures they need and
check the behaviour the tools promise.  Run them with:

    python3 -m unittest discover -s tests -v
"""

from __future__ import annotations

import json
import struct
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))

import disc  # noqa: E402
import function_inventory as inventory  # noqa: E402
import lot_table  # noqa: E402
import mangle  # noqa: E402
import versions  # noqa: E402
import version_check  # noqa: E402
import gen_progress_report  # noqa: E402
from c_source_policy import policy_errors  # noqa: E402


class DiscTest(unittest.TestCase):
    def test_hash_image(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "sample.bin"
            path.write_bytes(b"rac-sac" * 1000)
            sha1, sha256 = disc.hash_image(path)
            self.assertEqual(len(sha1), 40)
            self.assertEqual(len(sha256), 64)
            self.assertNotEqual(sha1, sha256)

    def test_entry_parsing(self) -> None:
        # A directory record: length 34, extent 7, size 2048, no flags.
        record = bytearray(34)
        record[0] = 34
        struct.pack_into("<I", record, 2, 7)
        struct.pack_into("<I", record, 10, 2048)
        record[25] = 0
        record[32] = 1
        record[33] = ord("A")
        entry = disc.IsoDisc._entry(bytes(record), 0, "")
        self.assertEqual(entry.name, "A")
        self.assertEqual(entry.extent, 7)
        self.assertEqual(entry.size, 2048)
        self.assertFalse(entry.directory)
        self.assertEqual(entry.end, 7 * 2048 + 2048)

    def test_rejects_a_bad_record(self) -> None:
        with self.assertRaises(ValueError):
            disc.IsoDisc._entry(bytes(40), 0, "")


class MangleTest(unittest.TestCase):
    def test_free_function(self) -> None:
        parts = mangle.demangle("GLOBAL_GetFlagBit__FUiUc")
        self.assertEqual(parts["kind"], "free function")
        # The encoding carries the parameter list, not the return type.
        self.assertEqual([str(a) for a in parts["arguments"]],
                         ["unsigned int", "unsigned char"])

    def test_void_function(self) -> None:
        self.assertEqual(mangle.prototype("FADEOVERLAY_IsAtFinalUpAlpha__Fv"),
                         "? FADEOVERLAY_IsAtFinalUpAlpha(void)")

    def test_member_function(self) -> None:
        parts = mangle.demangle("LevelDataCB__11ApeLevelDefP12TiXmlElement")
        self.assertEqual(parts["kind"], "member function")
        self.assertEqual(parts["class"], "ApeLevelDef")
        self.assertEqual([str(a) for a in parts["arguments"]], ["TiXmlElement *"])

    def test_constructor_and_destructor(self) -> None:
        self.assertEqual(mangle.demangle("__11ApeLevelDef")["kind"], "constructor")
        self.assertEqual(mangle.demangle("_$_11ApeLevelDef")["kind"], "destructor")

    def test_unknown_code_is_reported(self) -> None:
        parts = mangle.demangle("weird__Fzz")
        self.assertEqual(str(parts["returns"]), "?")


class BranchTest(unittest.TestCase):
    def test_jump(self) -> None:
        word = 0x0C000000 | (0x1000 >> 2)
        self.assertEqual(inventory.branch_target(word, 0x80), 0x1000)

    def test_conditional_branch(self) -> None:
        word = 0x10800002 | 0xFFFF  # beq $zero, $zero, -1
        self.assertEqual(inventory.branch_target(word, 0x80), 0x80 + 4 - 4)

    def test_cop1_branch(self) -> None:
        word = 0x45000008  # bc1f with the register field 8
        self.assertTrue(inventory.is_branch_word(word))
        self.assertEqual(inventory.branch_target(word, 0x80), 0x80 + 4 + 32)

    def test_vector_opcode_is_not_a_branch(self) -> None:
        self.assertFalse(inventory.is_branch_word(0x4BE52108))


class PolicyTest(unittest.TestCase):
    """The evidence of the project is the instruction the compiler produced."""

    def test_plain_c_is_accepted(self) -> None:
        source = "int f(int a) { return a + 1; }\n"
        self.assertEqual(policy_errors(source), [])

    def test_inline_assembly_is_refused(self) -> None:
        source = "int f(void) { asm(\"nop\"); return 0; }\n"
        self.assertTrue(policy_errors(source))

    def test_global_assembly_is_refused(self) -> None:
        source = "asm(\".word 0x00000000\");\nint f(void) { return 0; }\n"
        self.assertTrue(policy_errors(source))

    def test_register_variable_is_refused(self) -> None:
        source = "int f(void) { register int a = 0; return a; }\n"
        self.assertTrue(policy_errors(source))

    def test_assembler_directive_is_refused(self) -> None:
        source = "int f(void) { .word 0x00000000\n return 0; }\n"
        self.assertTrue(policy_errors(source))

    def test_assembler_name_label_is_allowed(self) -> None:
        source = 'extern int f(void) __asm__("f_00001000");\nint f(void) { return 0; }\n'
        self.assertEqual(policy_errors(source), [])

    def test_comment_does_not_hide_a_verdict(self) -> None:
        source = "/* asm(\"nop\"); */\nint f(void) { return 0; }\n"
        self.assertEqual(policy_errors(source), [])

    # GCC longlong.h's __mips__ umul_ppmm, as upstream writes it.
    UMUL_PPMM = (
        '#define umul_ppmm(w1, w0, u, v) \\\n'
        '  __asm__ ("multu %2,%3"\t\t\t\t\t\t\\\n'
        '\t   : "=l" ((USItype) (w0)),\t\t\t\t\t\\\n'
        '\t     "=h" ((USItype) (w1))\t\t\t\t\t\\\n'
        '\t   : "d" ((USItype) (u)),\t\t\t\t\t\\\n'
        '\t     "d" ((USItype) (v)))\n'
        '#define UMUL_TIME 10\n')

    def test_upstream_runtime_primitive_is_allowed_in_source_and_expansion(self) -> None:
        expanded = ('UDItype f(USItype u, USItype v) { DIunion w; '
                    '__asm__ ("multu %2,%3" : "=l" ((USItype) (w.s.low)), '
                    '"=h" ((USItype) (w.s.high)) : "d" ((USItype) (u)), '
                    '"d" ((USItype) (v))); return w.ll; }\n')
        self.assertEqual(policy_errors(self.UMUL_PPMM), [])
        self.assertEqual(policy_errors(expanded), [])

    def test_rejects_every_other_form_of_the_runtime_primitive(self) -> None:
        operands = ': "=l" (lo), "=h" (hi) : "d" (a), "d" (b)'
        for statement in (
            f'__asm__ __volatile__ ("multu %2,%3" {operands});',
            f'__asm__ ("mult %2,%3" {operands});',
            f'__asm__ ("multu %2,%3\\n\\tnop" {operands});',
            f'__asm__ ("multu %2,%3" {operands} : "memory");',
            '__asm__ ("multu %2,%3" : "=h" (hi), "=l" (lo) : "d" (a), "d" (b));',
            '__asm__ ("multu %2,%3" : "=l" (lo), "=h" (hi) : "d" (a), "r" (b));',
            '__asm__ ("multu %2,%3" : "=l" (lo), "=h" (hi) : "d" (a));',
            '__asm__ ("multu %2,%3" : "=l" (lo), "=h" (hi) : "d" (a), "d" ("b"));',
            '__asm__ ("multu %2,%3" : "=l" (lo), "=h" (hi) : '
            '"d" (({ __asm__ ("nop"); a; })), "d" (b));',
        ):
            with self.subTest(statement=statement):
                self.assertTrue(policy_errors(f'void f(void) {{ {statement} }}'))
        # The primitive does not excuse other assembly beside it.
        self.assertTrue(policy_errors(
            f'void f(void) {{ __asm__ ("multu %2,%3" {operands}); __asm__ ("nop"); }}'))
        self.assertTrue(policy_errors(self.UMUL_PPMM.replace('"multu', '"nop\\n\\tmultu')))


class LotTableTest(unittest.TestCase):
    def test_init_and_check(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "L01.tsv"
            lot_table.main.__wrapped__ if False else None
            path.write_text("\t".join(lot_table.HEADER) + "\n", encoding="utf-8")
            rows = lot_table.read_table(path)
            self.assertEqual(rows, [])
            path.write_text(
                "\t".join(lot_table.HEADER) + "\n"
                "FE.REL\t0x001000\t64\tfunction_inventory:bounded_candidate\t"
                "call+export\tName\t" + "a" * 64 + "\t31\t31\n",
                encoding="utf-8")
            rows = lot_table.read_table(path)
            self.assertEqual(len(rows), 1)
            self.assertEqual(rows[0]["module"], "FE.REL")

    def test_sha_must_be_hex(self) -> None:
        self.assertIsNone(lot_table.SHA.fullmatch("z" * 64))
        self.assertIsNotNone(lot_table.SHA.fullmatch("a" * 64))


class VersionsTest(unittest.TestCase):
    def test_get_version(self) -> None:
        us = versions.get("us")
        self.assertEqual(us.key, "us")
        self.assertEqual(us.id, "SCUS_976.23")
        self.assertTrue(us.primary)

        pal = versions.get("pal")
        self.assertEqual(pal.key, "pal")
        self.assertEqual(pal.id, "SCES_554.96")
        self.assertFalse(pal.primary)

        # Aliases
        self.assertEqual(versions.get("usa").key, "us")
        self.assertEqual(versions.get("europe").key, "pal")
        self.assertEqual(versions.get("SCES_554.96").key, "pal")

        with self.assertRaises(SystemExit):
            versions.get("nonexistent_version")

    def test_committed_programs(self) -> None:
        us = versions.get("us")
        pal = versions.get("pal")
        us_progs = versions.read_programs(us)
        pal_progs = versions.read_programs(pal)
        self.assertEqual(len(us_progs), 214)
        self.assertEqual(len(pal_progs), 214)
        self.assertEqual(us_progs[0][0], "boot")
        self.assertEqual(pal_progs[0][0], "boot")

    def test_compare_code_spans(self) -> None:
        # Exact match
        code1 = b"\x27\xbd\xff\xf0\xff\xb0\x00\x00"
        self.assertEqual(version_check.compare_code_spans(code1, code1), "exact")

        # JAL target differs (refs)
        jal1 = struct.pack("<I", 0x0C000001)
        jal2 = struct.pack("<I", 0x0C000002)
        self.assertEqual(version_check.compare_code_spans(jal1, jal2), "refs")

        # Instruction differs
        nop = struct.pack("<I", 0x00000000)
        add = struct.pack("<I", 0x00851020)
        self.assertEqual(version_check.compare_code_spans(nop, add), "differs")

    def test_bytematch_progress_report(self) -> None:
        self.assertTrue(gen_progress_report.check_reports())
        report_path = ROOT / "progress" / "report.json"
        self.assertTrue(report_path.is_file())
        with report_path.open(encoding="utf-8") as f:
            data = json.load(f)
        self.assertEqual(data.get("version"), 2)
        self.assertIn("measures", data)
        # The headline is the sum of the units of tools/function_units.py.
        summary = json.loads((ROOT / "config/units_summary.json").read_text(encoding="utf-8"))
        levels, boot = summary["levels"], summary["boot"]
        measures = data["measures"]
        self.assertEqual(measures["total_code"], str(levels["code_bytes"] + boot["code_bytes"]))
        self.assertEqual(measures["matched_code"],
                         str(levels["matched_bytes"] + boot["matched_bytes"]))
        self.assertEqual(measures["total_functions"], levels["functions"] + boot["functions"])
        self.assertEqual(measures["matched_functions"],
                         levels["matched_functions"] + boot["matched_functions"])
        self.assertEqual(measures["total_units"], levels["units"] + boot["units"])
        self.assertEqual(len(data["units"]), levels["units"] + boot["units"])
        self.assertGreaterEqual(len(data["categories"]), 33)


if __name__ == "__main__":
    unittest.main()
