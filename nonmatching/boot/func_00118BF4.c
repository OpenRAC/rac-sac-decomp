/* func_00118BF4 -- 4 bytes. SCUS_976.23 0x00118BF4.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * The pinned linker places .text at 0x00118BF8, four bytes after the
 * retail address, before a byte compare.
 *
 * Reopen when a route already in config/toolchain.json emits a .text
 * of exactly this extent and the pinned linker keeps .text at the
 * retail address, or when the interval is re-bounded. Do not reopen
 * with inline assembly or a new compiler route.
 */

void func_00118BF4(void)
{
}
