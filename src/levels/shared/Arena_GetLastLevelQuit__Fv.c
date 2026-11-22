/* Arena_GetLastLevelQuit__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001FE0.c.
 */

extern char D_L01_002541E4[];

int Arena_GetLastLevelQuit__Fv(void)
{
    return *(int *)D_L01_002541E4;
}
