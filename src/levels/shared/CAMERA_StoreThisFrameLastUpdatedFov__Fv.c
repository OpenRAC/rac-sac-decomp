/* CAMERA_StoreThisFrameLastUpdatedFov__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies one float from a global to another global.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_012B98.c.
 */

extern float D_FE_0013F63C;
extern float D_FE_0013F640;

void CAMERA_StoreThisFrameLastUpdatedFov__Fv(void)
{
    D_FE_0013F640 = D_FE_0013F63C;
}
