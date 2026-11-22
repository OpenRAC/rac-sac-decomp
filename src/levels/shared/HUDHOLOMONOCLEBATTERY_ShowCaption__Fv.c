/* HUDHOLOMONOCLEBATTERY_ShowCaption__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Sets the global at 0x325D0 to 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_01BA78.c.
 */

extern int D_L01_0026A61C;

void HUDHOLOMONOCLEBATTERY_ShowCaption__Fv(void)
{
    D_L01_0026A61C = 1;
}
