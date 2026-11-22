/* MOBY_RegisterSpawnBoltsCB__FPFP4Moby_v -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument in the global word at 0x27E90.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_002D30.c.
 */

extern char D_L01_00254FA8[];

void MOBY_RegisterSpawnBoltsCB__FPFP4Moby_v(int value)
{
    *(int *)D_L01_00254FA8 = value;
}
