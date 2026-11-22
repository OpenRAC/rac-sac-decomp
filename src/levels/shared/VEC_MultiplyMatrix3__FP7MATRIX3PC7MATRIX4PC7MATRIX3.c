/* VEC_MultiplyMatrix3__FP7MATRIX3PC7MATRIX4PC7MATRIX3 -- 348 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies the upper 3x3 of a 4-column matrix by a packed 3x3 matrix into a
 * packed 3x3 result.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_124B98.c.
 */

typedef struct {
    float m[3][3];
} Mat3;

typedef struct {
    float m[3][4];
} Mat34;

void VEC_MultiplyMatrix3__FP7MATRIX3PC7MATRIX4PC7MATRIX3(Mat3 *out, Mat34 *a, Mat3 *b)
{
    float r00, r01, r02, r10, r11, r12, r20, r21, r22;

    r00 = a->m[0][0] * b->m[0][0] + a->m[0][1] * b->m[1][0] + a->m[0][2] * b->m[2][0];
    r01 = a->m[0][0] * b->m[0][1] + a->m[0][1] * b->m[1][1] + a->m[0][2] * b->m[2][1];
    r02 = a->m[0][0] * b->m[0][2] + a->m[0][1] * b->m[1][2] + a->m[0][2] * b->m[2][2];
    r10 = a->m[1][0] * b->m[0][0] + a->m[1][1] * b->m[1][0] + a->m[1][2] * b->m[2][0];
    r11 = a->m[1][0] * b->m[0][1] + a->m[1][1] * b->m[1][1] + a->m[1][2] * b->m[2][1];
    r12 = a->m[1][0] * b->m[0][2] + a->m[1][1] * b->m[1][2] + a->m[1][2] * b->m[2][2];
    r20 = a->m[2][0] * b->m[0][0] + a->m[2][1] * b->m[1][0] + a->m[2][2] * b->m[2][0];
    r21 = a->m[2][0] * b->m[0][1] + a->m[2][1] * b->m[1][1] + a->m[2][2] * b->m[2][1];
    r22 = a->m[2][0] * b->m[0][2] + a->m[2][1] * b->m[1][2] + a->m[2][2] * b->m[2][2];
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
