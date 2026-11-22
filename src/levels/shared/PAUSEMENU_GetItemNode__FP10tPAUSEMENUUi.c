/* PAUSEMENU_GetItemNode__FP10tPAUSEMENUUi -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0BA438.c.
 */

int PAUSEMENU_GetItemNode__FP10tPAUSEMENUUi(int *set, unsigned int index)
{
    if (index < (unsigned int)set[1])
        return *(int *)(set[0] + index * 4);
    return 0;
}
