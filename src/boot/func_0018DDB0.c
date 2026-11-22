/* _tolower -- 32 bytes.
 *
 * A function of the boot executable at 0x0018DDB0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_tolower.c.
 */

/* newlib _tolower, (32 bytes):
 * the ctype table at is indexed by c; bit 0 marks an upper-case
 * letter, which is mapped down by 0x20.
 */
extern unsigned char D_00204799[];

int _tolower(int c) {
    return (D_00204799[c] & 1) ? c + 0x20 : c;
}
