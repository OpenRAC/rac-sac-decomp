/* HUD_ResetHudRenderStates__Fv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the three shared counters.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00BC68.c.
 */

extern int g_HudLastRenderState;
extern int g_HudLastRenderStateDirty;
extern int D_FE_000FB474;

void HUD_ResetHudRenderStates__Fv(void)
{
    g_HudLastRenderState = 0;
    g_HudLastRenderStateDirty = 0;
    D_FE_000FB474 = 0;
}
