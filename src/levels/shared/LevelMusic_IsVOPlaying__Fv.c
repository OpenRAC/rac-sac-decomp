/* LevelMusic_IsVOPlaying__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_015778.c.
 */

extern char D_L01_0026C198[];

int LevelMusic_IsVOPlaying__Fv(void)
{
    return *(unsigned int *)D_L01_0026C198 != 0;
}
