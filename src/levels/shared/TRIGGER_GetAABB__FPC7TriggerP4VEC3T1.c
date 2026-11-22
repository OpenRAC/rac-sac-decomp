/* TRIGGER_GetAABB__FPC7TriggerP4VEC3T1 -- 196 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Computes the axis-aligned bounds of the oriented box: the center plus and
 * minus the sum of absolute axis extents.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_085168.c.
 */

extern float fabsf(float x);

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

void TRIGGER_GetAABB__FPC7TriggerP4VEC3T1(float *m, float *min, float *max)
{
    float e[3];

    e[0] = fabsf(m[1]) + fabsf(m[5]) + fabsf(m[9]);
    e[1] = fabsf(m[2]) + fabsf(m[6]) + fabsf(m[10]);
    e[2] = fabsf(m[3]) + fabsf(m[7]) + fabsf(m[11]);
    Add3(max, m + 13, e);
    Sub3(min, m + 13, e);
}
