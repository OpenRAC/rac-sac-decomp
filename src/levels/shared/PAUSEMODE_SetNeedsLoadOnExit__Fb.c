/* PAUSEMODE_SetNeedsLoadOnExit__Fb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00B900.c.
 */

extern char D_FE_000FB70C[];

void PAUSEMODE_SetNeedsLoadOnExit__Fb(unsigned char b)
{
    *(char *)D_FE_000FB70C = (char)b;
}
