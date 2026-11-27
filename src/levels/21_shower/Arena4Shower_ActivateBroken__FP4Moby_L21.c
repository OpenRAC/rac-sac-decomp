/* Arena4Shower_ActivateBroken__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ShowerVars {
    char pad[0x54];
    unsigned char flag;
} ShowerVars;

typedef struct Moby {
    char pad[0x45];
    unsigned char state;
    char pad2[0x12];
    ShowerVars *vars;
} Moby;

void Arena4Shower_ActivateBroken__FP4Moby(Moby *moby)
{
    ShowerVars *vars;

    vars = moby->vars;
    moby->state = 5;
    vars->flag = 0;
}
