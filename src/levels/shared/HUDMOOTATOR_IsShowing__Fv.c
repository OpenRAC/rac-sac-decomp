/* HUDMOOTATOR_IsShowing__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_015778.c.
 */

extern char HUDMOOTATOR_g_Data[];

int HUDMOOTATOR_IsShowing__Fv(void)
{
    return *(unsigned int *)HUDMOOTATOR_g_Data != 0;
}
