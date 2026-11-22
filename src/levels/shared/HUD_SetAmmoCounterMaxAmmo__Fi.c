/* HUD_SetAmmoCounterMaxAmmo__Fi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument in the global word at 0x27E90.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_002D30.c.
 */

extern char HUD_g_AmmoCounterMax[];

void HUD_SetAmmoCounterMaxAmmo__Fi(int value)
{
    *(int *)HUD_g_AmmoCounterMax = value;
}
