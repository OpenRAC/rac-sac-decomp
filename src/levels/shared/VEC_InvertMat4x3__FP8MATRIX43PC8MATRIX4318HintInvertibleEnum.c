/* VEC_InvertMat4x3__FP8MATRIX43PC8MATRIX4318HintInvertibleEnum -- 356 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Inverts a 3x3 matrix with a translation row (twelve floats).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_15_0EB490.c.
 */

void VEC_InvertMat4x3__FP8MATRIX43PC8MATRIX4318HintInvertibleEnum(float *out, float *m)
{
    float m00, m01, m02;
    float m10, m11, m12;
    float m20, m21, m22;
    float a, b, c, d, e, f, g, h, i;
    float det, inv;
    float t0, t1, t2;

    m00 = m[0];
    m01 = m[1];
    m02 = m[2];
    m10 = m[3];
    m11 = m[4];
    m12 = m[5];
    m20 = m[6];
    m21 = m[7];
    m22 = m[8];
    a = m22 * m11 - m12 * m21;
    c = m02 * m21 - m22 * m01;
    b = m12 * m01 - m02 * m11;
    e = m12 * m20 - m22 * m10;
    f = m22 * m00 - m02 * m20;
    g = m02 * m10 - m12 * m00;
    h = m10 * m21 - m20 * m11;
    i = m20 * m01 - m00 * m21;
    d = m00 * m11 - m10 * m01;
    det = m00 * a + m10 * c + m20 * b;
    inv = 1.0f / det;
    out[0] = a * inv;
    out[1] = c * inv;
    out[2] = b * inv;
    out[3] = e * inv;
    out[4] = f * inv;
    out[5] = g * inv;
    out[6] = h * inv;
    out[7] = i * inv;
    out[8] = d * inv;
    t0 = m[9];
    t1 = m[10];
    t2 = m[11];
    out[9] = -out[0] * t0 - out[3] * t1 - out[6] * t2;
    out[10] = -out[1] * t0 - out[4] * t1 - out[7] * t2;
    out[11] = -out[2] * t0 - out[5] * t1 - out[8] * t2;
}
