/* GRINDRAIL_GrindLockStopCamera__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/03_kalidon/LEVEL_03_05A778.c.
 */

struct Flags_05A778 {
    char pad_00[0x20];
    unsigned char lower;
    unsigned char upper;
};

extern struct Flags_05A778 g_grindrail;

void GRINDRAIL_GrindLockStopCamera__Fv(void)
{
    struct Flags_05A778 *flags = &g_grindrail;
    flags->lower = 1;
    flags->upper = 1;
}
