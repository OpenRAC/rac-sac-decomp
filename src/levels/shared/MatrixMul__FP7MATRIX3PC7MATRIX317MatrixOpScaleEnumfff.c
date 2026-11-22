/* MatrixMul__FP7MATRIX3PC7MATRIX317MatrixOpScaleEnumfff -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scales the nine floats of the record *a1 by the three multipliers m0, m1, m2
 * (cycled) into the record *a0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_03_126E70.c.
 */

void MatrixMul__FP7MATRIX3PC7MATRIX317MatrixOpScaleEnumfff(float *a0, float *a1, float m0, float m1, float m2)
{
    float v0 = a1[0] * m0;
    float v1 = a1[1] * m1;
    float v2 = a1[2] * m2;
    float v3 = a1[3] * m0;
    float v4 = a1[4] * m1;
    float v5 = a1[5] * m2;
    float v6 = a1[6] * m0;
    float v7 = a1[7] * m1;
    float v8 = a1[8] * m2;
    a0[0] = v0;
    a0[1] = v1;
    a0[2] = v2;
    a0[3] = v3;
    a0[4] = v4;
    a0[5] = v5;
    a0[6] = v6;
    a0[7] = v7;
    a0[8] = v8;
}
