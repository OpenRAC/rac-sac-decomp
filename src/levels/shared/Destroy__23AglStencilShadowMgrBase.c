/* Destroy__23AglStencilShadowMgrBase -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void Reset__23AglStencilShadowMgrBase(void);
void DestroyFullScreenQuad__23AglStencilShadowMgrBase(void);

void Destroy__23AglStencilShadowMgrBase(void)
{
    Reset__23AglStencilShadowMgrBase();
    DestroyFullScreenQuad__23AglStencilShadowMgrBase();
}
