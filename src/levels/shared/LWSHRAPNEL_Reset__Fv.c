/* LWSHRAPNEL_Reset__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char g_lwshrapnel[];

void BALLPHYSICS_DispatcherReset__FP22BALLPHYSICS_Dispatcher(void *);

void LWSHRAPNEL_Reset__Fv(float a, float b, float c, float d)
{
    BALLPHYSICS_DispatcherReset__FP22BALLPHYSICS_Dispatcher(g_lwshrapnel);
}
