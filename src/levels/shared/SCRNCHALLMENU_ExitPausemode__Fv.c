/* SCRNCHALLMENU_ExitPausemode__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0036D8.c.
 */

void SCRNCHALLMENU_ResetMapAvail__Fv(void);

void SCRNCHALLMENU_ExitPausemode__Fv(void)
{
    SCRNCHALLMENU_ResetMapAvail__Fv();
}
