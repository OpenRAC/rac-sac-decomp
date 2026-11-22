/* PAUSEMENU_SetTextItemColor__FP10tPAUSEMENUUiUiUiUiUi -- 92 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0B9840.c.
 */

int PAUSEMENU_SetTextItemColor__FP10tPAUSEMENUUiUiUiUiUi(int *set, unsigned int index, int a, int b, int c,
                unsigned int slot)
{
    char *record;
    if (index >= (unsigned int)set[1])
        return 0;
    if (slot >= 4)
        return 0;
    record = *(char **)((char *)(unsigned int)set[0] + index * 4);
    record += (int)slot * 0x30;
    *(int *)(record + 0x18) = a;
    *(int *)(record + 0x1c) = b;
    *(int *)(record + 0x20) = c;
    record[0x24] = 1;
    return 1;
}
