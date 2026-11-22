/* GCS_WaveCorvetteGrid_Overridevalue__FPbPUc -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_138558.c.
 */

void GCS_WaveCorvetteGrid_Overridevalue__FPbPUc(unsigned char *out, const unsigned char *source)
{
    *out = *source != 0;
}
