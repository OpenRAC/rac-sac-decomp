/* Initialize__12AglRenderMgr -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void Initialize__16AglRenderListMgr(void);
void Initialize__14AglPostProcMgr(void);

void Initialize__12AglRenderMgr(void)
{
    Initialize__16AglRenderListMgr();
    Initialize__14AglPostProcMgr();
}
