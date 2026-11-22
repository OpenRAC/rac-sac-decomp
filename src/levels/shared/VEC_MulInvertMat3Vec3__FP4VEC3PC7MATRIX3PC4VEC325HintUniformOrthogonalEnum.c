/* VEC_MulInvertMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC325HintUniformOrthogonalEnum -- 184 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Projects a 3-vector onto three axis rows, normalised by the squared length.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0EB6D0.c.
 */

void VEC_MulInvertMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC325HintUniformOrthogonalEnum(float *out, float *a, float *w)
{
    float *r1;
    float *r2;
    float inv;
    float n2;
    float t0;
    float t1;
    float t2;

    r1 = a + 3;
    r2 = a + 6;
    n2 = a[0] * a[0] + a[1] * a[1] + a[2] * a[2];
    inv = 1.0f / n2;
    t0 = (w[0] * a[0] + w[1] * a[1] + w[2] * a[2]) * inv;
    t1 = (w[0] * r1[0] + w[1] * r1[1] + w[2] * r1[2]) * inv;
    t2 = (w[0] * r2[0] + w[1] * r2[1] + w[2] * r2[2]) * inv;
    out[0] = t0;
    out[1] = t1;
    out[2] = t2;
}
