/* GadgetBotController_GetLastBoltReward__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001FE0.c.
 */

extern char g_gbc_last_bolt_reward[];

int GadgetBotController_GetLastBoltReward__Fv(void)
{
    return *(int *)g_gbc_last_bolt_reward;
}
