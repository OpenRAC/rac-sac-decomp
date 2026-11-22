/* SetFarZCull__21AglStencilShadowsBasef -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at 0x143F04.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_012B88.c.
 */

extern float D_FE_00108E64;

void SetFarZCull__21AglStencilShadowsBasef(float a0)
{
    D_FE_00108E64 = a0;
}
