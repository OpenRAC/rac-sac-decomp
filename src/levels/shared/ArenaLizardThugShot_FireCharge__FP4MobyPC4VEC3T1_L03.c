/* ArenaLizardThugShot_FireCharge__FP4MobyPC4VEC3T1 -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Vars {
    char pad[8];
    float scale;
    char gap[4];
    unsigned char flag;
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

void ArenaLizardThugShot_FireCharge__FP4MobyPC4VEC3T1(Moby *moby)
{
    Vars *vars;

    vars = moby->vars;
    vars->flag = 0;
    vars->scale = 1.0f;
}
