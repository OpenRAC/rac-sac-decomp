/* GCSHIP_AnimGetTime__Fv -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1347B0.c.
 */

extern int GCSHIP_AnimGetActive__Fv(void);
extern float MOBY_GetMobyAnimTime__FPC4Moby(int);
extern int g_gcship;
float GCSHIP_AnimGetTime__Fv(void)
{
    if (GCSHIP_AnimGetActive__Fv() == -1)
        return 0.0f;
    return MOBY_GetMobyAnimTime__FPC4Moby(g_gcship);
}