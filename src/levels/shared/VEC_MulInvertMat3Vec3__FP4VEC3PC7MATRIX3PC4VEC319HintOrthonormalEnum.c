/* VEC_MulInvertMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC319HintOrthonormalEnum -- 132 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Rotates a vector by the upper 3x3 of a matrix without translation.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_126D38.c.
 */

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void VEC_MulInvertMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC319HintOrthonormalEnum(float *out, float *m, float *v, int flag)
{
    float r0 = Dot3(v, m);
    float r1 = Dot3(v, m + 3);
    float r2 = Dot3(v, m + 6);

    out[0] = r0;
    out[1] = r1;
    out[2] = r2;
}
