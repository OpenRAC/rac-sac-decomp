/* Arena3SentryTurret_GetMode__FP4MobyR33Arena3SentryTurret_projectileTypeR27Arena3SentryTurret_fireMode -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Vars {
    char pad[0x48];
    int fireMode;
    int projectileType;
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

void Arena3SentryTurret_GetMode__FP4MobyR33Arena3SentryTurret_projectileTypeR27Arena3SentryTurret_fireMode(
    Moby *moby, int *projectileType, int *fireMode)
{
    Vars *vars;

    vars = moby->vars;
    *fireMode = vars->fireMode;
    *projectileType = vars->projectileType;
}
