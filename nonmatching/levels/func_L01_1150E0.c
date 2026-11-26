/* func_L01_1150E0 -- 4 bytes. LEVEL1.REL 0x1150E0.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * The linked body is 12 bytes. First difference: body byte 2.
 *
 * Reopen when a route already in config/toolchain.json emits a .text
 * of exactly this extent and the pinned linker keeps .text at the
 * retail address, or when the interval is re-bounded. Do not reopen
 * with inline assembly or a new compiler route.
 */

void func_L01_1150E0(int *out)
{
    *out = 7;
}
