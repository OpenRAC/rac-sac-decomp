/* VEC_MultiplyMatrix3__FP7MATRIX4PC7MATRIX3PC7MATRIX4 -- 348 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies a packed 3x3 matrix by the upper 3x3 block of a 4x4 matrix into a
 * 4x4 destination.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_130E20.c.
 */

void VEC_MultiplyMatrix3__FP7MATRIX4PC7MATRIX3PC7MATRIX4(float *out, float *a, float *b)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = a[0] * b[0] + a[1] * b[4] + a[2] * b[8];
    r1 = a[0] * b[1] + a[1] * b[5] + a[2] * b[9];
    r2 = a[0] * b[2] + a[1] * b[6] + a[2] * b[10];
    r3 = a[3] * b[0] + a[4] * b[4] + a[5] * b[8];
    r4 = a[3] * b[1] + a[4] * b[5] + a[5] * b[9];
    r5 = a[3] * b[2] + a[4] * b[6] + a[5] * b[10];
    r6 = a[6] * b[0] + a[7] * b[4] + a[8] * b[8];
    r7 = a[6] * b[1] + a[7] * b[5] + a[8] * b[9];
    r8 = a[6] * b[2] + a[7] * b[6] + a[8] * b[10];
    out[0] = r0;
    out[1] = r1;
    out[2] = r2;
    out[4] = r3;
    out[5] = r4;
    out[6] = r5;
    out[8] = r6;
    out[9] = r7;
    out[10] = r8;
}
