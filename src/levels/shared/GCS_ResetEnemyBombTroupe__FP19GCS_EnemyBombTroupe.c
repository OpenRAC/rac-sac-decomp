/* GCS_ResetEnemyBombTroupe__FP19GCS_EnemyBombTroupe -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0036D8.c.
 */

void ACTOR_ClearTroupe__FP12ACTOR_Troupe(void);

void GCS_ResetEnemyBombTroupe__FP19GCS_EnemyBombTroupe(void)
{
    ACTOR_ClearTroupe__FP12ACTOR_Troupe();
}
