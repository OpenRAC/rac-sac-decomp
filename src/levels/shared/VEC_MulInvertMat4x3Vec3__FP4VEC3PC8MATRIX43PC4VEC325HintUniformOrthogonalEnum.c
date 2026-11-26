/* VEC_MulInvertMat4x3Vec3__FP4VEC3PC8MATRIX43PC4VEC325HintUniformOrthogonalEnum -- 232 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Transforms a point offset from a base by the three matrix rows, scaled by
 * the reciprocal squared length of the first row.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0EB828.c.
 */

static inline void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static inline float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void VEC_MulInvertMat4x3Vec3__FP4VEC3PC8MATRIX43PC4VEC325HintUniformOrthogonalEnum(float *out, float *m, float *b, int unused)
{
    float d[3];
    float s;
    float x;
    float y;
    float z;

    Sub3(d, b, m + 9);
    s = 1.0f / Dot3(m, m);
    x = Dot3(d, m);
    y = Dot3(d, m + 3);
    z = Dot3(d, m + 6);
    out[0] = x * s;
    out[1] = y * s;
    out[2] = z * s;
}
