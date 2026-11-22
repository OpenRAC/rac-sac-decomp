/* ProcessLists__12AglRenderMgr -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void Sort__16AglRenderListMgr(void);
void Render__16AglRenderListMgr(void);

void ProcessLists__12AglRenderMgr(void)
{
    Sort__16AglRenderListMgr();
    Render__16AglRenderListMgr();
}
