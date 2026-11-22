/* hi0bits -- 132 bytes.
 *
 * A function of the boot executable at 0x0018FB98; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * It follows the form of newlib's libc/stdlib/mprec.c; see
 * THIRD_PARTY_NOTICES.md.
 *
 * hi0bits, from newlib libc/stdlib/mprec.c.
 */

int
hi0bits(x)
    unsigned x;
{
    int k;

    k = 0;
    if (!(x & 0xffff0000)) {
        k = 16;
        x <<= 16;
    }
    if (!(x & 0xff000000)) {
        k += 8;
        x <<= 8;
    }
    if (!(x & 0xf0000000)) {
        k += 4;
        x <<= 4;
    }
    if (!(x & 0xc0000000)) {
        k += 2;
        x <<= 2;
    }
    if ((int)x >= 0) {
        k++;
        if (!(x & 0x40000000))
            return 32;
    }
    return k;
}
