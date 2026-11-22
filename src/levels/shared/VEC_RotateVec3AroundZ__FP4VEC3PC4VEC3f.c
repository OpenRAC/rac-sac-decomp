/* VEC_RotateVec3AroundZ__FP4VEC3PC4VEC3f -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Builds a temporary record and passes it with the two arguments to its
 * consumer.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0E9DA8.c.
 */

extern void VEC_ConstructRotZMat3__FP7MATRIX3f(void *record);
extern void VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(void *a, void *record, void *b);

void VEC_RotateVec3AroundZ__FP4VEC3PC4VEC3f(void *a, void *b)
{
    char record[0x30];

    VEC_ConstructRotZMat3__FP7MATRIX3f(record);
    VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(a, record, b);
}
