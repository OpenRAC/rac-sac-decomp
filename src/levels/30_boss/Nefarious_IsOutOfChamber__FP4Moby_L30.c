/* Nefarious_IsOutOfChamber__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SuitVars {
    char pad[0x8B];
    unsigned char flag;
} SuitVars;

typedef struct Moby {
    char pad[0x58];
    SuitVars *vars;
} Moby;

int Nefarious_IsOutOfChamber__FP4Moby(Moby *moby)
{
    return moby->vars->flag == 0;
}
