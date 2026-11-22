/* LEVEL_GetGameType__FUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_000190.c.
 */

extern unsigned int D_L01_00293B90[];

unsigned int LEVEL_GetGameType__FUi(unsigned int index) {
    return D_L01_00293B90[index];
}
