/* MatrixMul__FP7MATRIX4PC8MATRIX43PC7MATRIX4 -- 568 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Concatenates two affine 4x4 matrices.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_128570.c.
 */

typedef struct {
    float m[4][4];
} Mat;
typedef struct {
    float m[4][3];
} Mat43;

void MatrixMul__FP7MATRIX4PC8MATRIX43PC7MATRIX4(Mat *o, Mat43 *a, Mat *b)
{
    float a00, a01, a02, a10, a11, a12, a20, a21, a22, a30, a31, a32, b00, b01, b02, b10, b11, b12, b20, b21, b22, b30, b31, b32;

    a00 = a->m[0][0];
    a01 = a->m[0][1];
    a02 = a->m[0][2];
    a10 = a->m[1][0];
    a11 = a->m[1][1];
    a12 = a->m[1][2];
    a20 = a->m[2][0];
    a21 = a->m[2][1];
    a22 = a->m[2][2];
    a30 = a->m[3][0];
    a31 = a->m[3][1];
    a32 = a->m[3][2];
    b00 = b->m[0][0];
    b01 = b->m[0][1];
    b02 = b->m[0][2];
    b10 = b->m[1][0];
    b11 = b->m[1][1];
    b12 = b->m[1][2];
    b20 = b->m[2][0];
    b21 = b->m[2][1];
    b22 = b->m[2][2];
    b30 = b->m[3][0];
    b31 = b->m[3][1];
    b32 = b->m[3][2];
    o->m[0][0] = a00 * b00 + a01 * b10 + a02 * b20;
    o->m[0][1] = a00 * b01 + a01 * b11 + a02 * b21;
    o->m[0][2] = a00 * b02 + a01 * b12 + a02 * b22;
    o->m[0][3] = 0.0f;
    o->m[1][0] = a10 * b00 + a11 * b10 + a12 * b20;
    o->m[1][1] = a10 * b01 + a11 * b11 + a12 * b21;
    o->m[1][2] = a10 * b02 + a11 * b12 + a12 * b22;
    o->m[1][3] = 0.0f;
    o->m[2][0] = a20 * b00 + a21 * b10 + a22 * b20;
    o->m[2][1] = a20 * b01 + a21 * b11 + a22 * b21;
    o->m[2][2] = a20 * b02 + a21 * b12 + a22 * b22;
    o->m[2][3] = 0.0f;
    o->m[3][0] = a30 * b00 + a31 * b10 + a32 * b20 + b30;
    o->m[3][1] = a30 * b01 + a31 * b11 + a32 * b21 + b31;
    o->m[3][2] = a30 * b02 + a31 * b12 + a32 * b22 + b32;
    o->m[3][3] = 1.0f;
}
