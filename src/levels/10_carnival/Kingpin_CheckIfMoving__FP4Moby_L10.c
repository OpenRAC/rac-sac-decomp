/* Kingpin_CheckIfMoving__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct KingpinVars {
    unsigned char pad[0xEC];
    void *state;
    unsigned char gap[0x1C];
    unsigned char moving;
} KingpinVars;

typedef struct Moby {
    unsigned char pad[0x58];
    KingpinVars *vars;
} Moby;

int Kingpin_CheckIfMoving__FP4Moby(Moby *moby)
{
    KingpinVars *vars;

    vars = moby->vars;
    return vars->state == (void *)&vars->moving;
}
