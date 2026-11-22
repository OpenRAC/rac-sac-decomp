/* Shutdown__12AglRenderMgr -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0036D8.c.
 */

void Destroy__14AglPostProcMgr(void);

void Shutdown__12AglRenderMgr(void)
{
    Destroy__14AglPostProcMgr();
}
