/* ZillaBot_AlertCapacitorDestroyed__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ZillaVars {
    char pad[0x17C];
    struct Moby *capacitor;
} ZillaVars;

typedef struct Moby {
    char pad[0x58];
    ZillaVars *vars;
} Moby;

extern Moby *g_zillaBot;

void ZillaBot_AlertCapacitorDestroyed__FP4Moby(Moby *moby)
{
    ZillaVars *vars;

    vars = g_zillaBot->vars;
    vars->capacitor = moby;
}
