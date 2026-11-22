/* GAMEMAP_GetMapNameBase__FUiUi -- 96 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A6BF8.c.
 */

extern int GAMEMAP_ThisLevelHasMaps__FUi(unsigned int value);
extern char D_FE_000FC670[];

int GAMEMAP_GetMapNameBase__FUiUi(unsigned int slot, unsigned int type)
{
    int *value;

    if (GAMEMAP_ThisLevelHasMaps__FUi(slot) == 0)
        return 0;
    value = *(int **)(D_FE_000FC670 + type * 4 + slot * 12);
    if (value != 0)
        return *value;
    return 0;
}
