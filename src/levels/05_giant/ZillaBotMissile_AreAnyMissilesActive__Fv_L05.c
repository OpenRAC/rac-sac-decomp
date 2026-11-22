/* ZillaBotMissile_AreAnyMissilesActive__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1D1228.c.
 */

extern unsigned char D_L05_003378F0;

unsigned int ZillaBotMissile_AreAnyMissilesActive__Fv(void) {
    return D_L05_003378F0 != 0;
}
