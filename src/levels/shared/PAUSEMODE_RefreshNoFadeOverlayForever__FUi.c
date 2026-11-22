/* PAUSEMODE_RefreshNoFadeOverlayForever__FUi -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_0C0FE8.c.
 */

extern void PAUSEMODE_RefreshNoFadeOverlay__FUiUi(unsigned int, int);

void PAUSEMODE_RefreshNoFadeOverlayForever__FUi(void)
{
    PAUSEMODE_RefreshNoFadeOverlay__FUiUi(0xffffffffu, 3);
}
