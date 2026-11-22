/* GCS_WaveCorvetteGrid_Overridevalue__FP4VEC3T0f -- 92 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_138F48.c.
 */

void GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(float *a0, float *a1, float p0);

void GCS_WaveCorvetteGrid_Overridevalue__FP4VEC3T0f(float *a0, float *a1, float p0)
{
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(a0, a1, p0);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(a0 + 1, a1 + 1, p0);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(a0 + 2, a1 + 2, p0);
}
