/* GCS_WaveMegaRockGrid_OverrideValue__FPfT0f -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * RAC5 vague 22 (L09), famille de 60 octets. * * Le retail compare *a1 a la
 * sentinelle -1000.0f : si la valeur n'est pas * la sentinelle, *a0 recoit *a1
 * * k ; sinon *a1 recoit *a0 / k.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_137E08.c.
 */

void GCS_WaveMegaRockGrid_OverrideValue__FPfT0f(float *a0, float *a1, float k)
{
    if (*a1 != -1000.0f) {
        *a0 = *a1 * k;
    } else {
        *a1 = *a0 / k;
    }
}
