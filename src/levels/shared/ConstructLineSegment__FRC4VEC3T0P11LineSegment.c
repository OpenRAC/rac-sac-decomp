/* ConstructLineSegment__FRC4VEC3T0P11LineSegment -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores two points into the segment record and the difference of the second
 * from the first.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_11A588.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    Vec3 a;
    Vec3 b;
    Vec3 d;
} Seg;

static __inline__ void Sub3(Vec3 *r, Vec3 *p, Vec3 *q)
{
    r->x = p->x - q->x;
    r->y = p->y - q->y;
    r->z = p->z - q->z;
}

void ConstructLineSegment__FRC4VEC3T0P11LineSegment(Vec3 *a, Vec3 *b, Seg *out)
{
    out->a = *a;
    out->b = *b;
    Sub3(&out->d, b, a);
}
