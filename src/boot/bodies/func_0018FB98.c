/* func_0018FB98 -- SCUS_976.23 0x0018FB98, 132 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   hi0bits — newlib libc/stdlib/mprec.c
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

int
hi0bits(x)
    register unsigned x;
{
    register int k;

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
