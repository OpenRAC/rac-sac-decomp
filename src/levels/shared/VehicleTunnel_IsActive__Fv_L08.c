/* VehicleTunnel_IsActive__Fv -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_015778.c.
 */

extern char D_L08_001F0818[];

int VehicleTunnel_IsActive__Fv(void)
{
    return *(unsigned int *)D_L08_001F0818 != 0;
}
