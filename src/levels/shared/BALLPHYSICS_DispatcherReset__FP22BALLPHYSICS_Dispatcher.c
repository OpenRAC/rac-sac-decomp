/* BALLPHYSICS_DispatcherReset__FP22BALLPHYSICS_Dispatcher -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_02E530.c.
 */

void BALLPHYSICS_DispatcherReset__FP22BALLPHYSICS_Dispatcher(char *object)
{
    *(int *)(object + 0x10) = 0;
    *(int *)(object + 0x14) = 0;
}
