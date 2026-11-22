/* PAUSEMENU_SetActiveAndShow__FP10tPAUSEMENUUibT2 -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0B99C8.c.
 */

typedef unsigned int u32;

int PAUSEMENU_SetActiveAndShow__FP10tPAUSEMENUUibT2(char *table, u32 index, int first, int second)
{
    if (index >= *(u32 *)(table + 4))
        return 0;
    (*(char **)(*(char **)table + index * 4))[0xCC] = first;
    (*(char **)(*(char **)table + index * 4))[0xCD] = second;
    return 1;
}
