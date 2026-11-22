/* ResetLists__12AglRenderMgr -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void InvalidateCache__12AglRenderMgr(void);
void Reset__16AglRenderListMgr(void);

void ResetLists__12AglRenderMgr(void)
{
    InvalidateCache__12AglRenderMgr();
    Reset__16AglRenderListMgr();
}
