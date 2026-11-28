/* func_FE_0C1180 -- 8 bytes. FE.REL 0x0C1180.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * The linked body is 28 bytes. The first difference is at body byte 0.
 *
 * Reopen when a route already in config/toolchain.json emits a .text
 * of exactly this extent and the pinned linker keeps .text at the
 * retail address, or when the interval is re-bounded. Do not reopen
 * with inline assembly or a new compiler route.
 */

void func_FE_0C118C(int code);

void func_FE_0C1180(void)
{
    func_FE_0C118C(72);
}
