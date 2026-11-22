/* FloatingMine_CheckCollisions__FP4Moby -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs the cleanup helper on the record when the check helper reports zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_017B50.c.
 */

extern int FloatingMine_CheckCollisionMobyMesh__FP4Moby(void);
extern void FloatingMine_CheckCollisionTie__FP4Moby(char *record);

void FloatingMine_CheckCollisions__FP4Moby(char *record)
{
    if (FloatingMine_CheckCollisionMobyMesh__FP4Moby() == 0)
        FloatingMine_CheckCollisionTie__FP4Moby(record);
}
