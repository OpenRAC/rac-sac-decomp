/* DamLeak_ReleaseGrowTarget__FP4Mobyb -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct LeakVars {
    char pad[0x14];
    void *grow;
} LeakVars;

typedef struct Moby {
    char pad[0x58];
    LeakVars *vars;
    char pad70[0x70 - 0x5C];
    void *target;
} Moby;

void DamLeak_ReleaseGrowTarget__FP4Mobyb(Moby *moby, int flag)
{
    LeakVars *vars;

    vars = moby->vars;
    vars->grow = 0;
    if (flag)
        moby->target = 0;
}
