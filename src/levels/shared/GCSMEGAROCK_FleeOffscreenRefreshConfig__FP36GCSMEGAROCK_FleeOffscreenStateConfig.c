/* GCSMEGAROCK_FleeOffscreenRefreshConfig__FP36GCSMEGAROCK_FleeOffscreenStateConfig -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Divides one of the record's floats by another and stores the quotient back
 * into the record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_102BA0.c.
 */

void GCSMEGAROCK_FleeOffscreenRefreshConfig__FP36GCSMEGAROCK_FleeOffscreenStateConfig(void *a0)
{
    float d = *(float *)a0;
    *(float *)((char *)a0 + 0x1C) = 1.0f / d;
}
