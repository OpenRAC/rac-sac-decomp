/* func_0018BB6C -- 4 bytes. SCUS_976.23 0x0018BB6C.
 *
 * Not a match. Profile gnu-ee-20261015:-O2 -G0.
 * The pinned linker places .text at 0x0018BB70, four bytes after the
 * retail address, before a byte compare.
 *
 * Reopen when a route already in config/toolchain.json emits a .text
 * of exactly this extent and the pinned linker keeps .text at the
 * retail address, or when the interval is re-bounded. Do not reopen
 * with inline assembly or a new compiler route.
 */

int func_0018BB6C(int value)
{
    return value | 16;
}
