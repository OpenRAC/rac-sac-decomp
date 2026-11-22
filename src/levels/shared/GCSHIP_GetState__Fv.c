/* GCSHIP_GetState__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001FE0.c.
 */

extern char D_L24_003A5C5C[];

int GCSHIP_GetState__Fv(void)
{
    return *(int *)D_L24_003A5C5C;
}
