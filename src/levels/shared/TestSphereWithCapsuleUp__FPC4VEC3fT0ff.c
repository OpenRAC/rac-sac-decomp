/* TestSphereWithCapsuleUp__FPC4VEC3fT0ff -- 132 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests whether a point lies within the summed radii of a vertical capsule:
 * the height difference is reduced by the half-height (kept only above it or
 * below the base), then the squared distance is compared with the squared
 * radius sum.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_11DE38.c.
 */

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

int TestSphereWithCapsuleUp__FPC4VEC3fT0ff(Vec3 *a, Vec3 *b, float r1, float r2, float h)
{
    float ax, ay, az, bx, by, bz;
    float dx, dy, dz;
    float s;

    ax = a->x;
    ay = a->y;
    az = a->z;
    bx = b->x;
    bz = b->z;
    by = b->y;
    dx = ax - bx;
    dy = ay - by;
    dz = az - bz;
    if (h < dy) {
        dy = dy - h;
    } else if (0.0f < dy) {
        dy = 0.0f;
    }
    s = r1 + r2;
    if (dx * dx + dy * dy + dz * dz < s * s) {
        return 1;
    }
    return 0;
}
