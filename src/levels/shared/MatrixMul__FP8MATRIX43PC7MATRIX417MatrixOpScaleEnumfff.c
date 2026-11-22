/* MatrixMul__FP8MATRIX43PC7MATRIX417MatrixOpScaleEnumfff -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies twelve floats of the source vector by the three scale factors,
 * cycling, and writes them back contiguously.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_23_119B90.c.
 */

void MatrixMul__FP8MATRIX43PC7MATRIX417MatrixOpScaleEnumfff(float *out, float *in, float s0, float s1, float s2)
{
    float t0 = in[0] * s0;
    float t1 = in[1] * s1;
    float t2 = in[2] * s2;
    float t3 = in[4] * s0;
    float t4 = in[5] * s1;
    float t5 = in[6] * s2;
    float t6 = in[8] * s0;
    float t7 = in[9] * s1;
    float t8 = in[10] * s2;
    float t9 = in[12] * s0;
    float t10 = in[13] * s1;
    float t11 = in[14] * s2;

    out[0] = t0;
    out[1] = t1;
    out[2] = t2;
    out[3] = t3;
    out[4] = t4;
    out[5] = t5;
    out[6] = t6;
    out[7] = t7;
    out[8] = t8;
    out[9] = t9;
    out[10] = t10;
    out[11] = t11;
}
