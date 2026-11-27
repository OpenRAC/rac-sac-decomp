/* DamLeak_ClaimPlugged__FP4MobyT0 -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Vars {
    char pad[0x18];
    void *claimed;
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

int DamLeak_ClaimPlugged__FP4MobyT0(Moby *self, void *other)
{
    self->vars->claimed = other;
    return 1;
}
