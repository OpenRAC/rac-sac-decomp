/* RightMulRotateAxisXInternal__FP4VEC3N20PC4VEC3N23ff -- 124 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Rotates the y/z pair of three vectors by the sine/cosine pair into three
 * outputs.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1292E0.c.
 */

typedef struct {
    float x, y, z;
} Vec3;

void RightMulRotateAxisXInternal__FP4VEC3N20PC4VEC3N23ff(Vec3 *o0, Vec3 *o1, Vec3 *o2, Vec3 *i0, Vec3 *i1, Vec3 *i2, float s, float c)
{
    float y0 = i0->y;
    float z0 = i0->z;
    float y1 = i1->y;
    float z1 = i1->z;
    float y2 = i2->y;
    float z2 = i2->z;

    o0->y = y0 * c - z0 * s;
    o0->z = y0 * s + z0 * c;
    o1->y = y1 * c - z1 * s;
    o1->z = y1 * s + z1 * c;
    o2->y = y2 * c - z2 * s;
    o2->z = y2 * s + z2 * c;
}
