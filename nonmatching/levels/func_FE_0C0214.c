/* func_FE_0C0214 -- 8 bytes. FE.REL 0x0C0214.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * Linker placed .text at 0x000C0218, expected 0x000C0214, before a byte compare.
 *
 * Reopen when a route already in config/toolchain.json emits a .text
 * of exactly this extent and the pinned linker keeps .text at the
 * retail address, or when the interval is re-bounded. Do not reopen
 * with inline assembly or a new compiler route.
 */

void func_FE_0C0220(int code);

void func_FE_0C0214(void)
{
    func_FE_0C0220(72);
}
