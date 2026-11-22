/* HUD_SetMainHudMode__F16eHUD_MAINHUDMODEUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A5D20.c.
 */

extern int D_L01_0025CD18;
extern int D_L01_0025CD20;

void HUD_SetMainHudMode__F16eHUD_MAINHUDMODEUi(int first, int second)
{
    D_L01_0025CD18 = first;
    D_L01_0025CD20 = second;
}
