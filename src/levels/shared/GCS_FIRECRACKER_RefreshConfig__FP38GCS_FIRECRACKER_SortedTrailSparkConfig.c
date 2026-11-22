/* GCS_FIRECRACKER_RefreshConfig__FP38GCS_FIRECRACKER_SortedTrailSparkConfig -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1.0 divided by the first float of the record into the float at +0x44.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_114050.c.
 */

void GCS_FIRECRACKER_RefreshConfig__FP38GCS_FIRECRACKER_SortedTrailSparkConfig(float *a0)
{
    a0[0x11] = 1.0f / a0[0];
}
