/* OperaMine_Init__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MineVars {
    int word0;
    unsigned char byte4;
    unsigned char byte5;
} MineVars;

typedef struct Moby {
    char pad[0x58];
    MineVars *vars;
} Moby;

int OperaMine_Init__FP4Moby(Moby *moby)
{
    MineVars *vars;

    vars = moby->vars;
    vars->word0 = 0;
    vars->byte4 = 0;
    vars->byte5 = 0;
    return 1;
}
