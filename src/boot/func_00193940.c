/* sceSifGetSreg -- 24 bytes.
 *
 * A function of the boot executable at 0x00193940; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifGetSreg.c.
 */

extern unsigned int D_0028FF40[];

unsigned int sceSifGetSreg(int sreg) {
    return D_0028FF40[sreg];
}
