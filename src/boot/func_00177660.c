/* sceDmaGetChan -- 40 bytes.
 *
 * A function of the boot executable at 0x00177660; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceDmaGetChan.c.
 */

/* sceDmaGetChan .. */
extern void *D_001CD840[];
void *sceDmaGetChan(unsigned int ch) {
    if (ch >= 10) return 0;
    return D_001CD840[ch];
}
