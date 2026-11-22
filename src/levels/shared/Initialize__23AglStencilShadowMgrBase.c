/* Initialize__23AglStencilShadowMgrBase -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void CreateFullScreenQuad__23AglStencilShadowMgrBase(void);
void CreateDiscShadowPoints__23AglStencilShadowMgrBase(void);

void Initialize__23AglStencilShadowMgrBase(void)
{
    CreateFullScreenQuad__23AglStencilShadowMgrBase();
    CreateDiscShadowPoints__23AglStencilShadowMgrBase();
}
