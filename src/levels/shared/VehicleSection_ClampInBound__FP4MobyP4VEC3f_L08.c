/* VehicleSection_ClampInBound__FP4MobyP4VEC3f -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_190928.c.
 */

extern int TRIGGER_ClampCircleInsideXZ__FPC7TriggerP4VEC3f(int a0);

void VehicleSection_ClampInBound__FP4MobyP4VEC3f(char *item)
{
    TRIGGER_ClampCircleInsideXZ__FPC7TriggerP4VEC3f(**(int **)(item + 0x54));
}
