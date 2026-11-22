/* SCRNMAINMENU_SetMapOptionActiveAndShowingTo__FbT0 -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards two pointers to a helper with the global as first argument.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_0C5D98.c.
 */

extern char D_L01_00262FB0[];
extern int PAUSEMENU_SetActiveAndShow__FP10tPAUSEMENUUibT2(char *, unsigned int, int, int);
void SCRNMAINMENU_SetMapOptionActiveAndShowingTo__FbT0(int a, int b)
{
    PAUSEMENU_SetActiveAndShow__FP10tPAUSEMENUUibT2(D_L01_00262FB0, 0, a, b);
}
