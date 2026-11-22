/* COL_RayIntersection__FRC4VEC2N30 -- 96 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the ratio of two cross-product style differences built from four
 * points.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1129B8.c.
 */

struct Vec1129B8 {
    float x;
    float y;
};

struct Diff1129B8 {
    float x;
    float y;
};

float COL_RayIntersection__FRC4VEC2N30(struct Vec1129B8 *p0, struct Vec1129B8 *p1, struct Vec1129B8 *p2, struct Vec1129B8 *p3)
{
    struct Diff1129B8 d;
    float num;
    float den;

    d.x = p2->x - p0->x;
    d.y = p2->y - p0->y;
    num = d.y * p3->x - d.x * p3->y;
    den = p1->y * p3->x - p1->x * p3->y;
    return num / den;
}
