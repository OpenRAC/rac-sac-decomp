/* TestSphereWithAABBCE__FPC4VEC3fT0T0 -- 156 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Is the point a2 inside the slab of half width (a0 - a1)? The three signed
 * distances to the slab are folded with a branchless minimum and the result is
 * compared with zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_11AF20.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

#define MINF(a, b) ((((a) + (b)) - fabsf((b) - (a))) * 0.5f)

int TestSphereWithAABBCE__FPC4VEC3fT0T0(Vec3 *a0, Vec3 *a1, Vec3 *a2, float r)
{
    float ax = a0->x;
    float ay = a0->y;
    float az = a0->z;
    float bx = a1->x;
    float by = a1->y;
    float bz = a1->z;
    float d0 = fabsf(ax - bx);
    float d1 = fabsf(ay - by);
    float d2 = fabsf(az - bz);
    float p = a2->x - d0;
    float q = a2->y - d1;
    float s = a2->z - d2;
    float m = MINF(MINF(p, q), s) + r;

    if (0.0f <= m) {
        return 1;
    }
    return 0;
}
