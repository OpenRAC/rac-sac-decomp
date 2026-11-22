/* MatrixMul__FP7MATRIX3PC7MATRIX3T1 -- 348 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies a packed 3x3 matrix into a packed 3x3 result.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1287A8.c.
 */

typedef struct {
    float m[3][3];
} Mat3;

void MatrixMul__FP7MATRIX3PC7MATRIX3T1(Mat3 *out, Mat3 *a, Mat3 *b)
{
    float a00 = a->m[0][0], a01 = a->m[0][1], a02 = a->m[0][2], a10 = a->m[1][0], a11 = a->m[1][1], a12 = a->m[1][2], a20 = a->m[2][0], a21 = a->m[2][1], a22 = a->m[2][2];
    float b00 = b->m[0][0], b01 = b->m[0][1], b02 = b->m[0][2], b10 = b->m[1][0], b11 = b->m[1][1], b12 = b->m[1][2], b20 = b->m[2][0], b21 = b->m[2][1], b22 = b->m[2][2];
    float r00, r01, r02, r10, r11, r12, r20, r21, r22;
    r00 = a00 * b00 + a01 * b10 + a02 * b20;
    r01 = a00 * b01 + a01 * b11 + a02 * b21;
    r02 = a00 * b02 + a01 * b12 + a02 * b22;
    r10 = a10 * b00 + a11 * b10 + a12 * b20;
    r11 = a10 * b01 + a11 * b11 + a12 * b21;
    r12 = a10 * b02 + a11 * b12 + a12 * b22;
    r20 = a20 * b00 + a21 * b10 + a22 * b20;
    r21 = a20 * b01 + a21 * b11 + a22 * b21;
    r22 = a20 * b02 + a21 * b12 + a22 * b22;
    out->m[0][0] = r00;
    out->m[0][1] = r01;
    out->m[0][2] = r02;
    out->m[1][0] = r10;
    out->m[1][1] = r11;
    out->m[1][2] = r12;
    out->m[2][0] = r20;
    out->m[2][1] = r21;
    out->m[2][2] = r22;
}
