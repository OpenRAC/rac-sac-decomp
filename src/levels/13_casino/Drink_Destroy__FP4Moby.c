/* Drink_Destroy__FP4Moby -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_1AED20.c.
 */

extern void MOBY_DestroyMobyCompletely__FP4Mobyb(void *, int);

void Drink_Destroy__FP4Moby(void *item)
{
    MOBY_DestroyMobyCompletely__FP4Mobyb(item, 1);
}
