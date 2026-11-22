/* func_L01_02BDA8 -- 220 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_01E028.c.
 */

void func_L01_02BDA8(float *a0, float *a1, float *a2, float *a3, float *t,
                 float x, float y)
{
    if (t[0] < 0.0f) {
        a0[0] = a3[0] - y;
        a1[0] = a2[0] + x;
    } else {
        a0[0] = a2[0] - x;
        a1[0] = a3[0] + y;
    }
    if (t[1] < 0.0f) {
        a0[1] = a3[1] - y;
        a1[1] = a2[1] + x;
    } else {
        a0[1] = a2[1] - x;
        a1[1] = a3[1] + y;
    }
    if (t[2] < 0.0f) {
        a0[2] = a3[2] - y;
        a1[2] = a2[2] + x;
    } else {
        a0[2] = a2[2] - x;
        a1[2] = a3[2] + y;
    }
}
