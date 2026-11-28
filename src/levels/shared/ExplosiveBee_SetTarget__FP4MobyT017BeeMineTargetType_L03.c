/* ExplosiveBee_SetTarget__FP4MobyT017BeeMineTargetType -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct BeeVars {
    char pad[0x18];
    int clear;
    void *target;
    char gap[0x34];
    int type;
} BeeVars;

typedef struct Moby {
    char pad[0x58];
    BeeVars *vars;
} Moby;

void ExplosiveBee_SetTarget__FP4MobyT017BeeMineTargetType(
    Moby *moby,
    void *target,
    int type)
{
    BeeVars *vars;

    vars = moby->vars;
    vars->type = type;
    vars->target = target;
    vars->clear = 0;
}
