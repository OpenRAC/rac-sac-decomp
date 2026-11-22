/* GCS_WaveMiniGrid_OverrideValue__FPiT0 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_137DE8.c.
 */

void GCS_WaveMiniGrid_OverrideValue__FPiT0(int *first, int *second)
{
    if (*second != -1000) {
        *first = *second;
        return;
    }
    *second = *first;
}
