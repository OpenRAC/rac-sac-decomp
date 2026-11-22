/* GetTempAllocator__9ApeMemMgrv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001FE0.c.
 */

extern char D_FE_0024804C[];

int GetTempAllocator__9ApeMemMgrv(void)
{
    return *(int *)D_FE_0024804C;
}
