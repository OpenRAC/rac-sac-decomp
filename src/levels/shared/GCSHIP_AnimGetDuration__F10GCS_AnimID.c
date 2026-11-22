/* GCSHIP_AnimGetDuration__F10GCS_AnimID -- 80 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_134760.c.
 */

extern int g_gcship;
extern char D_L24_0025C850[];
extern float MOBY_GetMobyAnimDuration__FPC4MobyUi(int a, int b);

float GCSHIP_AnimGetDuration__F10GCS_AnimID(int index)
{
    float d = *(float *)(D_L24_0025C850 + index * 12);

    return MOBY_GetMobyAnimDuration__FPC4MobyUi(g_gcship, index) / d;
}
