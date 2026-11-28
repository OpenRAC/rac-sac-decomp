/* TimedButtonController_SetFinshedCallback__FP4MobyT0PFP4MobyP4Moby27TimedButtonControllerResultf_v -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Vars {
    char pad[4];
    void *callback;
    void *other;
} Vars;

typedef struct Moby {
    char pad[0x58];
    Vars *vars;
} Moby;

void TimedButtonController_SetFinshedCallback__FP4MobyT0PFP4MobyP4Moby27TimedButtonControllerResultf_v(
    Moby *moby, Moby *other, void *callback)
{
    moby->vars->callback = callback;
    moby->vars->other = other;
}
