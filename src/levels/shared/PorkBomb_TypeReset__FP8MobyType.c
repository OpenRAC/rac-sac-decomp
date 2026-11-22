/* PorkBomb_TypeReset__FP8MobyType -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char g_porkBomb_physics[];

void BALLPHYSICS_DispatcherReset__FP22BALLPHYSICS_Dispatcher(void *);

void PorkBomb_TypeReset__FP8MobyType(float a, float b, float c, float d)
{
    BALLPHYSICS_DispatcherReset__FP22BALLPHYSICS_Dispatcher(g_porkBomb_physics);
}
