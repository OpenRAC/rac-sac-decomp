/* LEVEL_SetSkyVisibility__FUiUi -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_017B90.c.
 */

extern unsigned int D_L01_0024D214;

void LEVEL_SetSkyVisibility__FUiUi(unsigned int set, unsigned int clear)
{
    D_L01_0024D214 = (D_L01_0024D214 & ~clear) | set;
}
