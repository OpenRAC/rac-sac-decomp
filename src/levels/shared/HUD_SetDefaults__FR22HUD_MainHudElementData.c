/* HUD_SetDefaults__FR22HUD_MainHudElementData -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0B6FC8.c.
 */

void HUD_SetDefaults__FR22HUD_MainHudElementData(char *object)
{
    *(unsigned short *)(object + 0x14) = 0;
    *(unsigned int *)(object + 0x18) = 0xFFFFFFFFu;
    *(unsigned short *)(object + 0x16) = 0;
    *(unsigned short *)(object + 0x1C) = 0;
    *(int *)(object + 0x2C) = 0;
}
