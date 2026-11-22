/* VEC_MakeScaleMat__FP4VEC3N20fff -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Writes three axis vectors: x along the first, y along the second, z along
 * the third.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/VEC_MakeScaleMat__FP4VEC3N20fff.c.
 */

void VEC_MakeScaleMat__FP4VEC3N20fff(float *a, float *b, float *c, float x, float y, float z)
{
    a[0] = x;
    a[1] = 0.0f;
    a[2] = 0.0f;
    b[0] = 0.0f;
    b[1] = y;
    b[2] = 0.0f;
    c[0] = 0.0f;
    c[1] = 0.0f;
    c[2] = z;
}
