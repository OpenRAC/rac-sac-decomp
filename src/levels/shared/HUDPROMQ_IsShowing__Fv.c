/* HUDPROMQ_IsShowing__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_015778.c.
 */

extern char D_FE_000FC82C[];

int HUDPROMQ_IsShowing__Fv(void)
{
    return *(unsigned int *)D_FE_000FC82C != 0;
}
