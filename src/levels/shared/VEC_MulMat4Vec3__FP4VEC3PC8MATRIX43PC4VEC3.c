/* VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43PC4VEC3 -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43PC4VEC3.c.
 */

void VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43PC4VEC3(float *a0, float *a1, float *a2)
{
    float r0, r1, r2;

    r0 = a2[0] * a1[0];
    r1 = a2[0] * a1[1];
    r2 = a2[0] * a1[2];
    r0 = r0 + a2[1] * a1[3];
    r1 = r1 + a2[1] * a1[4];
    r2 = r2 + a2[1] * a1[5];
    r0 = r0 + a2[2] * a1[6];
    r1 = r1 + a2[2] * a1[7];
    r2 = r2 + a2[2] * a1[8];
    r0 = r0 + a1[9];
    r1 = r1 + a1[10];
    r2 = r2 + a1[11];
    a0[0] = r0;
    a0[1] = r1;
    a0[2] = r2;
}
