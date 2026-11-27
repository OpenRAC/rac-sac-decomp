/* Arena3SentryTurret_TurnOn__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Vars {
    char pad[0x118];
    unsigned char on;
    unsigned char activating;
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

void Arena3SentryTurret_TurnOn__FP4Moby(Moby *moby)
{
    Vars *vars;

    vars = moby->vars;
    vars->activating = 0;
    vars->on = 1;
}
