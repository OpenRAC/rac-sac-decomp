/* ICONMENU_SetCurrentSelectedItem__FP9tICONMENUUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0D8DF8.c.
 */

int ICONMENU_SetCurrentSelectedItem__FP9tICONMENUUi(int *set, unsigned int index)
{
    if (index < (unsigned int)set[1]) {
        set[3] = index;
        return 1;
    }
    return 0;
}
