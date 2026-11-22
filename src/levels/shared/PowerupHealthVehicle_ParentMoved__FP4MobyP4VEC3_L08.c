/* PowerupHealthVehicle_ParentMoved__FP4MobyP4VEC3 -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_02_161C68.c.
 */

typedef struct {
    char pad[0x30];
    float f30;
    float f34;
    float f38;
} Obj;

void PowerupHealthVehicle_ParentMoved__FP4MobyP4VEC3(Obj *a0, float *a1)
{
    float *d = &a0->f30;

    a0->f30 = a0->f30 + a1[0];
    d[1] = d[1] + a1[1];
    d[2] = d[2] + a1[2];
}
