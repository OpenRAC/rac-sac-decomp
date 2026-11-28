/* BeeMine_Init__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct BeeMineVars {
    unsigned char pad[0x58];
    int config;
} BeeMineVars;

typedef struct Moby {
    unsigned char pad[0x58];
    BeeMineVars *vars;
} Moby;

extern int g_beeMineConfig;

int BeeMine_Init__FP4Moby(Moby *moby)
{
    BeeMineVars *vars;

    vars = moby->vars;
    vars->config = g_beeMineConfig;
    return 1;
}
