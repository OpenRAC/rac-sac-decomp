/* func_L01_017B40 -- 84 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Fills the record: the first three floats come from the caller's array, the
 * next three are the three float arguments, the seventh is 1.0 and the last
 * one is the constant 1/30 divided by the caller's seventh float.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_011E10.c.
 */

void func_L01_017B40(float *a0, float *a1, float f12, float f13, float f14,
                 float f15, float f16)
{
    a0[0] = a1[0];
    a0[1] = a1[1];
    a0[2] = a1[2];
    a0[3] = f12;
    a0[4] = f13;
    a0[5] = f14;
    a0[6] = f15;
    a0[7] = 1.0f;
    a0[8] = (-1.0f / 30.0f) / f16;
}
