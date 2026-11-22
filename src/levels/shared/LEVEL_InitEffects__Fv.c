/* LEVEL_InitEffects__Fv -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void WEAPONLEVELUP_InitType__Fv(void);
void EffectsManager_InitEffects__Fv(void);

void LEVEL_InitEffects__Fv(void)
{
    WEAPONLEVELUP_InitType__Fv();
    EffectsManager_InitEffects__Fv();
}
