/* UPDATE_IsWeaponLevelUpEffectQueued__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_015778.c.
 */

extern char D_FE_000F04C8[];

int UPDATE_IsWeaponLevelUpEffectQueued__Fv(void)
{
    return *(unsigned int *)D_FE_000F04C8 != 0;
}
