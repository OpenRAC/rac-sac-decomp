/* CactusPirate_PlugLeak__FP4MobyT0 -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct LeakSlot {
    char pad[0xC];
    void *leak;
    int flag;
} LeakSlot;

typedef struct PirateVars {
    char pad[0x8C];
    LeakSlot slot;
} PirateVars;

typedef struct Moby {
    char pad[0x58];
    PirateVars *vars;
} Moby;

void CactusPirate_PlugLeak__FP4MobyT0(Moby *moby, void *leak)
{
    LeakSlot *slot;

    slot = &moby->vars->slot;
    slot->leak = leak;
    slot->flag = 0;
}
