/* BoltController_Term__FP4Moby -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears a global and then calls the helper with zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_155428.c.
 */

extern int D_L01_0026B328;
extern void MOBY_RegisterSpawnBoltsCB__FPFP4Moby_v(int value);

void BoltController_Term__FP4Moby(void)
{
    D_L01_0026B328 = 0;
    MOBY_RegisterSpawnBoltsCB__FPFP4Moby_v(0);
}
