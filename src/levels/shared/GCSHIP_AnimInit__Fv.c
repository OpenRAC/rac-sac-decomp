/* GCSHIP_AnimInit__Fv -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_134B70.c.
 */

extern void *g_gcship;
extern void MOBY_GetNumMobyAnimations__FPC4Moby(void *);
extern void GCSHIP_AnimReset__Fv(void);

void GCSHIP_AnimInit__Fv(void)
{
    MOBY_GetNumMobyAnimations__FPC4Moby(g_gcship);
    GCSHIP_AnimReset__Fv();
}
