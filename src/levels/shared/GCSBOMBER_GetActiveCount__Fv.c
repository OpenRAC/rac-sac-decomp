/* GCSBOMBER_GetActiveCount__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001FE0.c.
 */

extern char D_L24_003A4388[];

int GCSBOMBER_GetActiveCount__Fv(void)
{
    return *(int *)D_L24_003A4388;
}
