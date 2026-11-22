/* HUD_FontPrintWindowSetYScroll__FP20tFontPrintWindowDatai -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0AB4F0.c.
 */

void HUD_FontPrintWindowSetYScroll__FP20tFontPrintWindowDatai(char *object, int value)
{
    *(int *)(object + 0x18) = value;
    *(unsigned char *)(object + 0x51) = 1;
}
