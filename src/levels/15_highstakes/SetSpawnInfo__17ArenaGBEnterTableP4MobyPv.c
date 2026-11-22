/* SetSpawnInfo__17ArenaGBEnterTableP4MobyPv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_186E00.c.
 */

void SetSpawnInfo__17ArenaGBEnterTableP4MobyPv(char *object, int first, int second)
{
    *(int *)(object + 0x1C) = first;
    *(int *)(object + 0x20) = second;
}
