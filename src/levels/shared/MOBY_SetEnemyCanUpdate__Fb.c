/* MOBY_SetEnemyCanUpdate__Fb -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_00B900.c.
 */

extern char g_enemyMobysCanUpdate[];

void MOBY_SetEnemyCanUpdate__Fb(unsigned char b)
{
    *(char *)g_enemyMobysCanUpdate = (char)b;
}
