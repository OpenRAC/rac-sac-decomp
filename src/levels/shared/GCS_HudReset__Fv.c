/* GCS_HudReset__Fv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one flag word in a global block after a call.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0F73A0.c.
 */

extern char g_gcs[];
extern void HUD_SetHudHealthScore__Fi(void *);

void GCS_HudReset__Fv(void)
{
    unsigned int high;
    char *block;

    HUD_SetHudHealthScore__Fi(0);
    high = 0x40000;
    block = g_gcs;
    *(int *)(block + high + 0x4048) = 0;
}
