/* PAUSEMENU_SetTextSubnodeColor__FP10tPAUSEMENUUiUiUiUiUib -- 156 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B98A0.c.
 */

extern int PAUSEMENU_SetTextUseSubnodeColor__FP10tPAUSEMENUUiUib(int *set, unsigned int index, int slot, int value);

int PAUSEMENU_SetTextSubnodeColor__FP10tPAUSEMENUUiUiUiUiUib(int *set, unsigned int index, int slot, int a, int b, int c)
{
    int stride;

    if (index >= (unsigned int)set[1])
        return 0;
    stride = slot * 0x30;
    *(int *)(*(int *)(index * 4 + set[0]) + stride + 0x18) = a;
    *(int *)(*(int *)(index * 4 + set[0]) + stride + 0x1c) = b;
    *(int *)(*(int *)(index * 4 + set[0]) + stride + 0x20) = c;
    *(char *)(*(int *)(index * 4 + set[0]) + stride + 0x24) = 0;
    return PAUSEMENU_SetTextUseSubnodeColor__FP10tPAUSEMENUUiUib(set, index, slot, 1);
}
