/* ONSCREENKEYBOARD_Init__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the two shared flags.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0149B8.c.
 */

extern char D_FE_00108ADC[];
extern char D_FE_00108AE0[];

void ONSCREENKEYBOARD_Init__Fv(void)
{
    D_FE_00108ADC[0] = 0;
    *(int *)D_FE_00108AE0 = 0;
}
