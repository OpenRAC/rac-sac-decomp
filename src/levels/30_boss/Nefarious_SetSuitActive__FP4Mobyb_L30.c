/* Nefarious_SetSuitActive__FP4Mobyb -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SuitVars {
    char pad[0x80];
    unsigned char active;
    unsigned char activating;
    char pad82[8];
    unsigned char extra;
} SuitVars;

typedef struct Moby {
    char pad[0x58];
    SuitVars *vars;
} Moby;

void Nefarious_SetSuitActive__FP4Mobyb(Moby *moby, int on)
{
    SuitVars *vars;

    vars = moby->vars;
    vars->active = on;
    vars->activating = 0;
    vars->extra = 0;
}
