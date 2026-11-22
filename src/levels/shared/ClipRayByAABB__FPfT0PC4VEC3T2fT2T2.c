/* ClipRayByAABB__FPfT0PC4VEC3T2fT2T2 -- 776 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clips a ray against an axis-aligned box and returns the entry and exit
 * parameters.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_11C410.c.
 */

#define AXIS(i)                                  \
    {                                            \
        float dist = c[i] - o[i];                \
        float near = dist - e[i];                \
        float far = dist + e[i];                 \
        float dir = d[i];                        \
                                                 \
        if (0.0f < dir) {                        \
            if (dir * tmax < near)               \
                return 0;                        \
            if (dir * tmin < near)               \
                tmin = near / dir;               \
            if (far < dir * tmin)                \
                return 0;                        \
            if (far < dir * tmax)                \
                tmax = far / dir;                \
        } else {                                 \
            if (dir * tmin < near)               \
                return 0;                        \
            if (dir * tmax < near)               \
                tmax = near / dir;               \
            if (far < dir * tmax)                \
                return 0;                        \
            if (far < dir * tmin)                \
                tmin = far / dir;                \
        }                                        \
    }

int ClipRayByAABB__FPfT0PC4VEC3T2fT2T2(float *omin, float *omax, float *o, float *d, float *c, float *e, float tmax)
{
    float tmin = 0.0f;

    AXIS(0)
    AXIS(1)
    AXIS(2)
    *omin = tmin;
    *omax = tmax;
    return 1;
}
