/* ArenaFailureTrigger_AddSpecialCondition__FP4MobyiPFP4Moby_b -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Vars {
    int pad;
    void *cond[1];
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

void ArenaFailureTrigger_AddSpecialCondition__FP4MobyiPFP4Moby_b(
    Moby *moby,
    int index,
    void *cond)
{
    moby->vars->cond[index] = cond;
}
