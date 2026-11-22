/* PAUSEMENU_SetCurrentSelectedItem__FP10tPAUSEMENUUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0B99A8.c.
 */

int PAUSEMENU_SetCurrentSelectedItem__FP10tPAUSEMENUUi(int *set, unsigned int index)
{
    if (index < (unsigned int)set[1]) {
        set[2] = index;
        return 1;
    }
    return 0;
}
