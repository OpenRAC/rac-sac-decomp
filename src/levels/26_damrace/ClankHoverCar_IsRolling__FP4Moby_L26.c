/* ClankHoverCar_IsRolling__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct HoverVars {
    char pad[0xF4];
    unsigned int state;
} HoverVars;

typedef struct Moby {
    char pad[0x58];
    HoverVars *vars;
} Moby;

int ClankHoverCar_IsRolling__FP4Moby(Moby *moby)
{
    unsigned int state;

    state = moby->vars->state;
    return state - 15U < 2U;
}
