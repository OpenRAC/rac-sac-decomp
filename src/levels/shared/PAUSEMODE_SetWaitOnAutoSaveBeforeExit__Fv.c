/* PAUSEMODE_SetWaitOnAutoSaveBeforeExit__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_02A2C8.c.
 */

extern unsigned char D_FE_000FB68D;

void PAUSEMODE_SetWaitOnAutoSaveBeforeExit__Fv(void)
{
    D_FE_000FB68D = 1;
}
