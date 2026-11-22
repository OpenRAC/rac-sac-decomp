/* func_00185AD0 -- 48 bytes.
 *
 * A function of the boot executable at 0x00185AD0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body memcpyalpha.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/memcpyalpha.c.
 */

/* small forward byte copy, (36 bytes + nop padding):
 * if (n) { i = n - 1; do { *d++ = *s++; } while (i-- != 0); }
 */
void func_00185AD0(void *dst, const void *src, unsigned int n) {
    unsigned char *d = dst;
    const unsigned char *s = src;
    while (n--)
        *d++ = *s++;
}
