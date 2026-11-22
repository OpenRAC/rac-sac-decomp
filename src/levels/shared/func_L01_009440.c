/* func_L01_009440 -- 124 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Builds two offset vectors, calls a helper, then compares a value with a sum
 * of two fields.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0319F0.c.
 */

int COL_FindClosestFloorTriangle__FRC4VEC3Pf(float *a, float *b);

int func_L01_009440(int unused, float *v, char *s0)
{
    float tmp[8];
    int ret;

    tmp[0] = v[0];
    tmp[1] = v[1] + *(float *)(s0 + 0x20);
    tmp[2] = v[2];
    ret = COL_FindClosestFloorTriangle__FRC4VEC3Pf(tmp, &tmp[4]);
    if (ret == -1) {
        return 0;
    }
    if (tmp[4] <= *(float *)(s0 + 0x20) + *(float *)(s0 + 0x24)) {
        return 1;
    }
    return 0;
}
