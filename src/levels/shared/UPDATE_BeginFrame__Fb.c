/* UPDATE_BeginFrame__Fb -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_020988.c.
 */

void SYSTEM_BeginFrame__Fb(void);
void DISPLAY_ResetMatrixRenderStates__Fv(void);

void UPDATE_BeginFrame__Fb(void)
{
    SYSTEM_BeginFrame__Fb();
    DISPLAY_ResetMatrixRenderStates__Fv();
}
