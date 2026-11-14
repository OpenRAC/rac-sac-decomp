/* MobyUtil_IsShotClear__FPC4VEC3T0b -- 256 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

/* Profile: this body needs the divpad route (the division padding patch).
 * The pinned gnu-ee-20261015 chain gives 248 bytes instead of 256: it does
 * not emit the two hazard slots the retail code keeps before the division.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

extern float sqrtf(float x);

extern int MobyUtil_IsShotClear__FPC4VEC3T0fb(VEC3 *a, VEC3 *b, VEC3 *c,
                                              float len);

int MobyUtil_IsShotClear__FPC4VEC3T0b(VEC3 *p0, VEC3 *p1, VEC3 *p2)
{
    VEC3 d;
    float len;
    float r;
    float iz;

    d.x = p1->x - p0->x;
    d.y = p1->y - p0->y;
    d.z = p1->z - p0->z;
    len = d.x * d.x + d.y * d.y + d.z * d.z;

    if (len < 9.5367431640625e-07f) {
        len = 0;
    } else {
        r = sqrtf(len);
        iz = 1.0f / r;
        len = r;
        d.x = d.x * iz;
        d.y = d.y * iz;
        d.z = d.z * iz;
    }

    return MobyUtil_IsShotClear__FPC4VEC3T0fb(p0, &d, p2, len);
}
