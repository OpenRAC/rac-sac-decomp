/* VEC_InvertMat3__FP7MATRIX3PC7MATRIX418HintInvertibleEnum -- 260 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Inverts a 3x3 matrix stored in the rows of a 4-float-stride matrix.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126730.c.
 */

void VEC_InvertMat3__FP7MATRIX3PC7MATRIX418HintInvertibleEnum(float *out, float *m)
{
    float a, b, c, d, e, f, g, h, i;
    float c0, c1, c2, o3, o4, o5, o6, o7, o8, det, inv;

    a = m[0];
    b = m[1];
    c = m[2];
    d = m[4];
    e = m[5];
    f = m[6];
    g = m[8];
    h = m[9];
    i = m[10];
    c0 = i * e - f * h;
    c1 = c * h - i * b;
    c2 = f * b - c * e;
    o3 = f * g - i * d;
    o4 = i * a - c * g;
    o5 = c * d - f * a;
    o6 = d * h - g * e;
    o7 = g * b - a * h;
    o8 = a * e - d * b;
    det = a * c0 + d * c1 + g * c2;
    inv = 1.0f / det;
    out[0] = c0 * inv;
    out[1] = c1 * inv;
    out[2] = c2 * inv;
    out[3] = o3 * inv;
    out[4] = o4 * inv;
    out[5] = o5 * inv;
    out[6] = o6 * inv;
    out[7] = o7 * inv;
    out[8] = o8 * inv;
}
