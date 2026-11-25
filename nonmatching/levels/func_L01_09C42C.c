/* func_L01_09C42C -- 8 bytes. LEVEL1.REL 0x09C42C.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * The pinned linker places .text at 0x0009C430, four bytes after the
 * retail address, before a byte compare. The same source is exact for the
 * other return-16 functions, whose addresses are 8-byte aligned.
 *
 * Reopen when a route already in config/toolchain.json emits a .text
 * of exactly this extent and the pinned linker keeps .text at the
 * retail address, or when the interval is re-bounded. Do not reopen
 * with inline assembly or a new compiler route.
 */

int func_L01_09C42C(void)
{
    return 16;
}
