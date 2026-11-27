/* RoboRatchet_SetSuitActivating__FP4Mobyb -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SuitVars {
    char pad[0xFC];
    unsigned char active;
    unsigned char activating;
} SuitVars;

typedef struct Moby {
    char pad[0x58];
    SuitVars *vars;
} Moby;

void RoboRatchet_SetSuitActivating__FP4Mobyb(Moby *moby, int on)
{
    SuitVars *vars;

    vars = moby->vars;
    vars->activating = on;
    vars->active = 0;
}
