/* ArenaWave_SetSpawner__FP4Mobyi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern void *g_arenaSpawners[];

void ArenaWave_SetSpawner__FP4Mobyi(void *moby, int index)
{
    g_arenaSpawners[index] = moby;
}
