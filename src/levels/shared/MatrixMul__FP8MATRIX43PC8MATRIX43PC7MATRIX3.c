/* MatrixMul__FP8MATRIX43PC8MATRIX43PC7MATRIX3 -- 488 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies a 4x3 float block by a 3x3 float matrix.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0EC5C0.c.
 */

void MatrixMul__FP8MATRIX43PC8MATRIX43PC7MATRIX3(float *o, float *a, float *b)
{
    float a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b0, b1, b2, b3, b4, b5, b6, b7, b8;
    b0 = b[0];
    b1 = b[1];
    b2 = b[2];
    b3 = b[3];
    b4 = b[4];
    b5 = b[5];
    b6 = b[6];
    b7 = b[7];
    b8 = b[8];
    a0 = a[0];
    a1 = a[1];
    a2 = a[2];
    a3 = a[3];
    a4 = a[4];
    a5 = a[5];
    a6 = a[6];
    a7 = a[7];
    a8 = a[8];
    a9 = a[9];
    a10 = a[10];
    a11 = a[11];
    o[0] = a0 * b0 + a1 * b3 + a2 * b6;
    o[1] = a0 * b1 + a1 * b4 + a2 * b7;
    o[2] = a0 * b2 + a1 * b5 + a2 * b8;
    o[3] = a3 * b0 + a4 * b3 + a5 * b6;
    o[4] = a3 * b1 + a4 * b4 + a5 * b7;
    o[5] = a3 * b2 + a4 * b5 + a5 * b8;
    o[6] = a6 * b0 + a7 * b3 + a8 * b6;
    o[7] = a6 * b1 + a7 * b4 + a8 * b7;
    o[8] = a6 * b2 + a7 * b5 + a8 * b8;
    o[9] = a9 * b0 + a10 * b3 + a11 * b6;
    o[10] = a9 * b1 + a10 * b4 + a11 * b7;
    o[11] = a9 * b2 + a10 * b5 + a11 * b8;
}
