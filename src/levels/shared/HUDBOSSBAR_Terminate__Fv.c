/* HUDBOSSBAR_Terminate__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01AFF8.c.
 */

extern unsigned int D_L01_0025CAAC;
extern unsigned int D_L01_0025CAC8;

void HUDBOSSBAR_Terminate__Fv(void) {
    D_L01_0025CAAC = 0;
    D_L01_0025CAC8 = 0;
}
