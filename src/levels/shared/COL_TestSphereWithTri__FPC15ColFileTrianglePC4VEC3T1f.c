/* COL_TestSphereWithTri__FPC15ColFileTrianglePC4VEC3T1f -- 848 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests whether a sphere touches a triangle prism: plane distance first, then
 * the closest edge point or vertex.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1132C8.c.
 */

typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    float a, b, c, d;
} Plane;

typedef struct {
    unsigned short i0, i1, i2, pad;
    Plane p0, p1, p2, p3;
} Tri;

extern float fabsf(float x);

int COL_TestSphereWithTri__FPC15ColFileTrianglePC4VEC3T1f(float r, Tri *t, Vec3 *v, Vec3 *c)
{
    float cx, cy, cz;
    float nx, ny, nz, nd;
    float d1, d2, d3;
    float qx, qy, qz;
    float s;
    float px, py, pz;
    float ex, ey, ez;
    float len2, u;
    float dx, dy, dz;
    Vec3 *a;
    Vec3 *b;

    cx = c->x;
    cy = c->y;
    cz = c->z;
    nx = t->p0.a;
    ny = t->p0.b;
    nz = t->p0.c;
    nd = t->p0.d;
    if (r < fabsf(nx * cx + ny * cy + nz * cz + nd))
        return 0;
    d1 = t->p1.a * cx + t->p1.b * cy + t->p1.c * cz + t->p1.d;
    if (r < d1)
        return 0;
    d2 = t->p2.a * cx + t->p2.b * cy + t->p2.c * cz + t->p2.d;
    if (r < d2)
        return 0;
    d3 = t->p3.a * cx + t->p3.b * cy + t->p3.c * cz + t->p3.d;
    if (r < d3)
        return 0;
    if (d1 <= 0.0f) {
        if (d2 <= 0.0f) {
            if (d3 <= 0.0f)
                return 1;
            b = &v[t->i2];
            a = &v[t->i0];
            dx = t->p3.a * d3;
            dy = t->p3.b * d3;
            dz = t->p3.c * d3;
            goto edge;
        }
        if (d3 <= 0.0f) {
            b = &v[t->i1];
            a = &v[t->i2];
            dx = t->p2.a * d2;
            dy = t->p2.b * d2;
            dz = t->p2.c * d2;
            goto edge;
        }
        dx = v[t->i2].x - cx;
        dy = v[t->i2].y - cy;
        dz = v[t->i2].z - cz;
        goto done;
    }
    if (d2 <= 0.0f) {
        if (d3 <= 0.0f) {
            b = &v[t->i0];
            a = &v[t->i1];
            dx = t->p1.a * d1;
            dy = t->p1.b * d1;
            dz = t->p1.c * d1;
            goto edge;
        }
        dx = v[t->i0].x - cx;
        dy = v[t->i0].y - cy;
        dz = v[t->i0].z - cz;
        goto done;
    }
    if (d3 <= 0.0f) {
        dx = v[t->i1].x - cx;
        dy = v[t->i1].y - cy;
        dz = v[t->i1].z - cz;
        goto done;
    }
    return 0;
edge:
    qx = cx - dx;
    qy = cy - dy;
    qz = cz - dz;
    ex = a->x - b->x;
    ey = a->y - b->y;
    ez = a->z - b->z;
    s = nx * qx + ny * qy + nz * qz + nd;
    px = qx - nx * s;
    py = qy - ny * s;
    pz = qz - nz * s;
    len2 = ex * ex + ey * ey + ez * ez;
    u = ex * (px - b->x) + ey * (py - b->y) + ez * (pz - b->z);
    if (u < 0.0f) {
        dx = b->x - cx;
        dy = b->y - cy;
        dz = b->z - cz;
    } else if (len2 < u) {
        dx = a->x - cx;
        dy = a->y - cy;
        dz = a->z - cz;
    } else {
        dx = px - cx;
        dy = py - cy;
        dz = pz - cz;
    }
done:
    return dx * dx + dy * dy + dz * dz <= r * r;
}
