/* JET_FlameRefreshConfig__FP22JET_FlameBlendedConfig -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the caller's list, then scales a difference.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/24_treehouse/LEVEL_24_1B9338.c.
 */

typedef struct {
    char pad[0x58];
    float f58;
    float f5C;
    char pad2[4];
    float f64;
} Rec;

extern void func_L10_14D998(void *a0);

void JET_FlameRefreshConfig__FP22JET_FlameBlendedConfig(Rec *a0)
{
    char *s0;
    char *s1;

    s1 = (char *)a0;
    s0 = (char *)a0;
    do {
        func_L10_14D998(s0);
        s0 = s0 + 0x2C;
    } while (s0 < s1 + 0x58);
    a0->f64 = (a0->f5C - a0->f58) * (1.0f / 2147483648.0f);
}
