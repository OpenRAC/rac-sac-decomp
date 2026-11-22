/* SCRNHELPMENU_Render__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char D_L01_00262680[];

void PAUSEMENU_Render__FP10tPAUSEMENU(void *);

void SCRNHELPMENU_Render__Fv(float a, float b, float c, float d)
{
    PAUSEMENU_Render__FP10tPAUSEMENU(D_L01_00262680);
}
