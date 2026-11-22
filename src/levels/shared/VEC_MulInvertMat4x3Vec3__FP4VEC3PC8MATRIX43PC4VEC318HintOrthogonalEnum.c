/* VEC_MulInvertMat4x3Vec3__FP4VEC3PC8MATRIX43PC4VEC318HintOrthogonalEnum -- 296 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Transforms a point offset from a base by the inverse of three non-normalised
 * matrix rows: each dot product is divided by its row's squared length.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126F70.c.
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

void VEC_MulInvertMat4x3Vec3__FP4VEC3PC8MATRIX43PC4VEC318HintOrthogonalEnum(float *out, float *m, float *b)
{
    float d[3];
    float x;
    float y;
    float z;

    Sub3(d, b, m + 9);
    x = Dot3(d, m) * (1.0f / Dot3(m, m));
    y = Dot3(d, m + 3) * (1.0f / Dot3(m + 3, m + 3));
    z = Dot3(d, m + 6) * (1.0f / Dot3(m + 6, m + 6));
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
