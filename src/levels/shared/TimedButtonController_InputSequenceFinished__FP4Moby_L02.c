/* TimedButtonController_InputSequenceFinished__FP4Moby -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Vars {
    char pad[0xC];
    int result;
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

int TimedButtonController_InputSequenceFinished__FP4Moby(Moby *moby)
{
    return moby->vars->result != 2;
}
