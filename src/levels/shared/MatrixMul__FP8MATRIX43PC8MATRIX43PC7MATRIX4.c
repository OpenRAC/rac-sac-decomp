/* MatrixMul__FP8MATRIX43PC8MATRIX43PC7MATRIX4 -- 544 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies a packed 3-wide-row affine transform by a 4-wide-row one into a
 * packed result.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1255B0.c.
 */

void MatrixMul__FP8MATRIX43PC8MATRIX43PC7MATRIX4(float *out, float *a, float *b)
{
    float a0 = a[0];
    float a1 = a[1];
    float a2 = a[2];
    float a3 = a[3];
    float a4 = a[4];
    float a5 = a[5];
    float a6 = a[6];
    float a7 = a[7];
    float a8 = a[8];
    float a9 = a[9];
    float a10 = a[10];
    float a11 = a[11];
    float b0 = b[0];
    float b1 = b[1];
    float b2 = b[2];
    float b3 = b[4];
    float b4 = b[5];
    float b5 = b[6];
    float b6 = b[8];
    float b7 = b[9];
    float b8 = b[10];
    float b9 = b[12];
    float b10 = b[13];
    float b11 = b[14];

    out[0] = a0 * b0 + a1 * b3 + a2 * b6;
    out[1] = a0 * b1 + a1 * b4 + a2 * b7;
    out[2] = a0 * b2 + a1 * b5 + a2 * b8;
    out[3] = a3 * b0 + a4 * b3 + a5 * b6;
    out[4] = a3 * b1 + a4 * b4 + a5 * b7;
    out[5] = a3 * b2 + a4 * b5 + a5 * b8;
    out[6] = a6 * b0 + a7 * b3 + a8 * b6;
    out[7] = a6 * b1 + a7 * b4 + a8 * b7;
    out[8] = a6 * b2 + a7 * b5 + a8 * b8;
    out[9] = a9 * b0 + a10 * b3 + a11 * b6 + b9;
    out[10] = a9 * b1 + a10 * b4 + a11 * b7 + b10;
    out[11] = a9 * b2 + a10 * b5 + a11 * b8 + b11;
}
