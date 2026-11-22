/* JET_FlameRefreshConfig__FP15JET_FlameConfig -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls func_L10_14D998 on the record, then stores the difference between the
 * record's 0x30 and 0x2C fields, scaled by 2^-31, into the 0x38 field.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_13E048.c.
 */

void func_L10_14D998(void *a0);

void JET_FlameRefreshConfig__FP15JET_FlameConfig(void *a0)
{
    void *s0 = a0;
    func_L10_14D998(a0);
    {
        float t0 = *(float *)((char *)s0 + 0x30);
        float t1 = *(float *)((char *)s0 + 0x2C);
        float k = 4.656612873077392578125e-10f;
        float d = t0 - t1;
        *(float *)((char *)s0 + 0x38) = d * k;
    }
}
