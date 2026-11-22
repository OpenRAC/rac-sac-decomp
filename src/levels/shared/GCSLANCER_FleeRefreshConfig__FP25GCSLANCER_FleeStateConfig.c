/* GCSLANCER_FleeRefreshConfig__FP25GCSLANCER_FleeStateConfig -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1.0 divided by the first float of the record into the float at +0x14.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_10BB08.c.
 */

void GCSLANCER_FleeRefreshConfig__FP25GCSLANCER_FleeStateConfig(float *a0)
{
    a0[5] = 1.0f / a0[0];
}
