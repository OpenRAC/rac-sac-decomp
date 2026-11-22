/* VEC_MulInvertMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC318HintOrthogonalEnum -- 248 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Projects a vector onto three basis axes scaled by inverse squared length.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126C40.c.
 */

void VEC_MulInvertMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC318HintOrthogonalEnum(float *out, float *m, float *v)
{
    float *c0 = m;
    float *c1 = m + 3;
    float *c2 = m + 6;
    float inv0 = 1.0f / (c0[0] * c0[0] + c0[1] * c0[1] + c0[2] * c0[2]);
    float inv1 = 1.0f / (c1[0] * c1[0] + c1[1] * c1[1] + c1[2] * c1[2]);
    float inv2 = 1.0f / (c2[0] * c2[0] + c2[1] * c2[1] + c2[2] * c2[2]);
    float r0 = (v[0] * c0[0] + v[1] * c0[1] + v[2] * c0[2]) * inv0;
    float r1 = (v[0] * c1[0] + v[1] * c1[1] + v[2] * c1[2]) * inv1;
    float r2 = (v[0] * c2[0] + v[1] * c2[1] + v[2] * c2[2]) * inv2;
    out[0] = r0;
    out[1] = r1;
    out[2] = r2;
}
