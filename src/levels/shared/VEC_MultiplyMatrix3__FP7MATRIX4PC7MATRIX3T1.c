/* VEC_MultiplyMatrix3__FP7MATRIX4PC7MATRIX3T1 -- 348 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies two packed 3x3 float matrices into a 3x4-strided destination.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_04_130CC0.c.
 */

void VEC_MultiplyMatrix3__FP7MATRIX4PC7MATRIX3T1(float *d, float *a, float *b)
{
    float r00, r01, r02, r10, r11, r12, r20, r21, r22;

    r00 = a[0] * b[0] + a[1] * b[3] + a[2] * b[6];
    r01 = a[0] * b[1] + a[1] * b[4] + a[2] * b[7];
    r02 = a[0] * b[2] + a[1] * b[5] + a[2] * b[8];
    r10 = a[3] * b[0] + a[4] * b[3] + a[5] * b[6];
    r11 = a[3] * b[1] + a[4] * b[4] + a[5] * b[7];
    r12 = a[3] * b[2] + a[4] * b[5] + a[5] * b[8];
    r20 = a[6] * b[0] + a[7] * b[3] + a[8] * b[6];
    r21 = a[6] * b[1] + a[7] * b[4] + a[8] * b[7];
    r22 = a[6] * b[2] + a[7] * b[5] + a[8] * b[8];
    d[0] = r00;
    d[1] = r01;
    d[2] = r02;
    d[4] = r10;
    d[5] = r11;
    d[6] = r12;
    d[8] = r20;
    d[9] = r21;
    d[10] = r22;
}
