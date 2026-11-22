/* ICONHORMENU_GetSubSlotColor__FP12tICONHORMENUP17tICONHORMENU_NODEUiUi -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D8E78.c.
 */

unsigned int ICONHORMENU_GetSubSlotColor__FP12tICONHORMENUP17tICONHORMENU_NODEUiUi(int *set, int address, int mode, unsigned int value)
{
    if (set[0] + set[3] * 0x40 == address) {
        if (mode == set[5])
            return value;
        return 0xFFFFFFFFu;
    }
    return 0xFF808080u;
}
