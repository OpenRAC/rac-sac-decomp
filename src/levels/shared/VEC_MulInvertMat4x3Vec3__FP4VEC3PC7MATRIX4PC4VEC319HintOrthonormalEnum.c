/* VEC_MulInvertMat4x3Vec3__FP4VEC3PC7MATRIX4PC4VEC319HintOrthonormalEnum -- 180 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Transforms a point offset from a base by a 3x3 matrix row set.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126EB0.c.
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

void VEC_MulInvertMat4x3Vec3__FP4VEC3PC7MATRIX4PC4VEC319HintOrthonormalEnum(float *out, float *m, float *b, int unused)
{
    float d[3];
    float x;
    float y;
    float z;

    Sub3(d, b, m + 12);
    x = Dot3(d, m);
    y = Dot3(d, m + 4);
    z = Dot3(d, m + 8);
    out[0] = x;
    out[1] = y;
    out[2] = z;
}
