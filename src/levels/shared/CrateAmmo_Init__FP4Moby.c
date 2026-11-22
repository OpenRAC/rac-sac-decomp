/* CrateAmmo_Init__FP4Moby -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards the object to the shared handler with the fixed table and reports
 * success.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_15F1E8.c.
 */

extern char g_crateAmmo[];

extern void CrateShared_NotifyRespawned__FP18CrateShared_TroupeP4Moby(void *table, void *p);

int CrateAmmo_Init__FP4Moby(void *p)
{
    CrateShared_NotifyRespawned__FP18CrateShared_TroupeP4Moby(g_crateAmmo, p);
    return 1;
}
