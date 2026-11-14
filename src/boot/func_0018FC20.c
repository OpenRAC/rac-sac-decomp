/* func_0018FC20 -- 192 bytes.
 *
 * A function of the boot executable at 0x0018FC20; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * It follows the form of newlib's libc/stdlib/mprec.c; see
 * THIRD_PARTY_NOTICES.md.
 *
 * lo0bits, from newlib libc/stdlib/mprec.c.
 */

int
func_0018FC20(y)
    unsigned *y;
{
    int k;
    unsigned x;

    x = *y;
    if (x & 7) {
        if (x & 1)
            return 0;
        if (x & 2) {
            *y = x >> 1;
            return 1;
        }
        *y = x >> 2;
        return 2;
    }
    k = 0;
    if (!(x & 0xffff)) {
        k = 16;
        x >>= 16;
    }
    if (!(x & 0xff)) {
        k += 8;
        x >>= 8;
    }
    if (!(x & 0xf)) {
        k += 4;
        x >>= 4;
    }
    if (!(x & 0x3)) {
        k += 2;
        x >>= 2;
    }
    if (!(x & 1)) {
        k++;
        x >>= 1;
        if (!x)
            return 32;
    }
    *y = x;
    return k;
}
