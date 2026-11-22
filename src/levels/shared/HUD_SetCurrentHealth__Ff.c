/* HUD_SetCurrentHealth__Ff -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the float argument at 0x143F04.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_012B88.c.
 */

extern float HUD_g_CurrentHealth;

void HUD_SetCurrentHealth__Ff(float a0)
{
    HUD_g_CurrentHealth = a0;
}
