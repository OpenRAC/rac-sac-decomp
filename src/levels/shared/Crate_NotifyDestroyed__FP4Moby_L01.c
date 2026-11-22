/* Crate_NotifyDestroyed__FP4Moby -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards the object to the shared handler.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E18.c.
 */

extern char g_crate[];

void CrateShared_NotifyDestroyed__FP18CrateShared_TroupeP4Moby(void *, void *);

void Crate_NotifyDestroyed__FP4Moby(void *p)
{
    CrateShared_NotifyDestroyed__FP18CrateShared_TroupeP4Moby(g_crate, p);
}
