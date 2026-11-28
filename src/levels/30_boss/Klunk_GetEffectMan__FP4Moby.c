/* Klunk_GetEffectMan__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct KlunkVars {
    char pad[0xA0];
    unsigned char effectMan;
} KlunkVars;

typedef struct Moby {
    char pad[0x58];
    KlunkVars *vars;
} Moby;

extern Moby *g_klunk;

unsigned char *Klunk_GetEffectMan__FP4Moby(Moby *unused)
{
    Moby *moby;

    moby = g_klunk;
    return &moby->vars->effectMan;
}
