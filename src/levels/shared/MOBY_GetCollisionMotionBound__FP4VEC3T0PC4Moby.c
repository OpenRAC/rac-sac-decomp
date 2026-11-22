/* MOBY_GetCollisionMotionBound__FP4VEC3T0PC4Moby -- 184 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_082568.c.
 */

int MOBY_GetCollisionMotionBound__FP4VEC3T0PC4Moby(float *a0, float *a1, char *a2)
{
    char *e;
    int r;

    e = *(char **)(a2 + 0x40);
    if (e == 0) {
        r = 0;
    } else {
        char *o = *(char **)(e + 0x10);
        int (*fn)(float *, float *) = *(int (**)(float *, float *))(o + 0x20);

        if (fn == 0) {
            r = 0;
        } else if (*(int *)(a2 + 0x5C) == 0) {
            r = 0;
        } else {
            r = fn(a0, a1);
            if (r != 0) {
                a0[0] -= 0.03125f;
                a0[1] -= 0.03125f;
                a0[2] -= 0.03125f;
                a1[0] += 0.03125f;
                a1[1] += 0.03125f;
                a1[2] += 0.03125f;
            }
        }
    }
    return r;
}
