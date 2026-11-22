/* MatrixMul__FP7MATRIX4PC7MATRIX417MatrixOpScaleEnumfff -- 172 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Writes the input 4x4 matrix with each row scaled by one of three scalars and
 * an identity last column.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_22_0FFA68.c.
 */

void MatrixMul__FP7MATRIX4PC7MATRIX417MatrixOpScaleEnumfff(float *out, float *in, int mode, float sx, float sy, float sz)
{
    float t0, t1, t2, t4, t5, t6, t8, t9, t10, t12, t13, t14;

    t0 = in[0] * sx;
    t1 = in[1] * sy;
    t2 = in[2] * sz;
    t4 = in[4] * sx;
    t5 = in[5] * sy;
    t6 = in[6] * sz;
    t8 = in[8] * sx;
    t9 = in[9] * sy;
    t10 = in[10] * sz;
    t12 = in[12] * sx;
    t13 = in[13] * sy;
    t14 = in[14] * sz;
    out[0] = t0;
    out[1] = t1;
    out[2] = t2;
    out[3] = 0.0f;
    out[4] = t4;
    out[5] = t5;
    out[6] = t6;
    out[7] = 0.0f;
    out[8] = t8;
    out[9] = t9;
    out[10] = t10;
    out[11] = 0.0f;
    out[12] = t12;
    out[13] = t13;
    out[14] = t14;
    out[15] = 1.0f;
}
