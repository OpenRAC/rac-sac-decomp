/* PAUSEMODE_GetCurrentReroutedEntryScreenValue__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001FE0.c.
 */

extern char g_PauseModeData[];

int PAUSEMODE_GetCurrentReroutedEntryScreenValue__Fv(void)
{
    return *(int *)g_PauseModeData;
}
