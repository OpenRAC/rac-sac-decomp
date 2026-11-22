/* MOBY_IsMobyAnimBlending__FPC4Moby -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_1AED20.c.
 */

extern void MOBY_CheckMobyAnimDone__FPC4Mobyb(void *, int);

void MOBY_IsMobyAnimBlending__FPC4Moby(void *item)
{
    MOBY_CheckMobyAnimDone__FPC4Mobyb(item, 1);
}
