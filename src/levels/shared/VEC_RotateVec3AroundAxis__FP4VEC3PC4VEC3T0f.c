/* VEC_RotateVec3AroundAxis__FP4VEC3PC4VEC3T0f -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Builds a 4x4 matrix from the point and transforms the source vector by it
 * into the destination.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_124208.c.
 */

extern void VEC_ConstructRotAxisMat4__FP7MATRIX4PC4VEC3f(void *a0, float *a1, float v);
extern void VEC_MulMat4Vec3__FP4VEC3PC7MATRIX4PC4VEC3(float *out, float *m, float *src);

void VEC_RotateVec3AroundAxis__FP4VEC3PC4VEC3T0f(float *dst, float *src, float *p)
{
    float m[16];

    ((void (*)(void *, float *))VEC_ConstructRotAxisMat4__FP7MATRIX4PC4VEC3f)(m, p);
    VEC_MulMat4Vec3__FP4VEC3PC7MATRIX4PC4VEC3(dst, m, src);
}
