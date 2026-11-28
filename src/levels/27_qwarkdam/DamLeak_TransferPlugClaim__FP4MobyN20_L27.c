/* DamLeak_TransferPlugClaim__FP4MobyN20 -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct LeakVars {
    char pad[0x18];
    void *claim;
} LeakVars;

typedef struct Moby {
    char pad[0x58];
    LeakVars *vars;
} Moby;

void DamLeak_TransferPlugClaim__FP4MobyN20(Moby *moby, void *from, void *to)
{
    LeakVars *vars;

    vars = moby->vars;
    if (vars->claim == from)
        vars->claim = to;
}
