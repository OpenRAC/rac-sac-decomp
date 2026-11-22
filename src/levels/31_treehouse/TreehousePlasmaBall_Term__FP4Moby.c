/* TreehousePlasmaBall_Term__FP4Moby -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_1707F8.c.
 */

extern void PAR_DestroyGroup__FP9PAR_Group(int);

void TreehousePlasmaBall_Term__FP4Moby(char *item)
{
    PAR_DestroyGroup__FP9PAR_Group(*(int *)(item + 0x58));
}
