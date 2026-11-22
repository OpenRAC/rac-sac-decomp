/* MOBY_GetEnemyCanUpdate__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one byte of the global flag table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001400.c.
 */

extern unsigned char g_enemyMobysCanUpdate[];

unsigned char MOBY_GetEnemyCanUpdate__Fv(void)
{
    return g_enemyMobysCanUpdate[0];
}
