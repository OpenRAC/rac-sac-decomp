/* GCSMINI_LaunchRefreshConfig__FP25GCSMINI_LaunchStateConfig -- 120 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a guarded reciprocal of one field and a second guarded reciprocal of
 * another.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_112648.c.
 */

struct P112648 {
    char pad0[4];
    float f04;
    char pad08[0x1C - 0x08];
    float f1C;
    char pad20[0x30 - 0x20];
    float f30;
    float f34;
};

static __inline__ float recip_guard(float v)
{
    return (v < 0.0010000000474974513f) ? 0.0f : 1.0f / v;
}

void GCSMINI_LaunchRefreshConfig__FP25GCSMINI_LaunchStateConfig(struct P112648 *p)
{
    p->f30 = recip_guard(p->f1C);
    p->f34 = recip_guard(p->f04);
}
