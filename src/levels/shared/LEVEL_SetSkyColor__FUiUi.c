/* LEVEL_SetSkyColor__FUiUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B71F8.c.
 */

extern unsigned int D_L01_0031AA90[];

void LEVEL_SetSkyColor__FUiUi(unsigned int index, unsigned int value) {
    D_L01_0031AA90[index] = value;
}
