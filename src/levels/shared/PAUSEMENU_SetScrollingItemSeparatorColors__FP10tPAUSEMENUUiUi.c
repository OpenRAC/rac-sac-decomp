/* PAUSEMENU_SetScrollingItemSeparatorColors__FP10tPAUSEMENUUiUi -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0B9998.c.
 */

int PAUSEMENU_SetScrollingItemSeparatorColors__FP10tPAUSEMENUUiUi(char *object, int first, int second)
{
    *(int *)(object + 0x78) = first;
    *(int *)(object + 0x7C) = second;
    return 1;
}
