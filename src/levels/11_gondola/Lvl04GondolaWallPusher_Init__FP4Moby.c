/* Lvl04GondolaWallPusher_Init__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct GondolaWallVars {
    int word0;
    unsigned char byte4;
} GondolaWallVars;

typedef struct Moby {
    char pad[0x58];
    GondolaWallVars *vars;
} Moby;

int Lvl04GondolaWallPusher_Init__FP4Moby(Moby *moby)
{
    GondolaWallVars *vars;

    vars = moby->vars;
    vars->word0 = 0;
    vars->byte4 = 0;
    return 1;
}
