/* func_FE_0C020C -- 8 bytes. FE.REL 0x0C020C.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * Linker placed .text at 0x000C0210, expected 0x000C020C, before a byte compare.
 *
 * Reopen when a route already in config/toolchain.json emits a .text
 * of exactly this extent and the pinned linker keeps .text at the
 * retail address, or when the interval is re-bounded. Do not reopen
 * with inline assembly or a new compiler route.
 */

void func_FE_0C0220(int code);

void func_FE_0C020C(void)
{
    func_FE_0C0220(68);
}
