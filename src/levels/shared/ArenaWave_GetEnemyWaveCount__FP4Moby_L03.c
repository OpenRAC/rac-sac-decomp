/* ArenaWave_GetEnemyWaveCount__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/17_multiplayer_02/LEVEL_17_16A7D0.c.
 */

int ArenaWave_GetEnemyWaveCount__FP4Moby(char *object)
{
    char *child = *(char **)(object + 0x58);
    return *(int *)child;
}
