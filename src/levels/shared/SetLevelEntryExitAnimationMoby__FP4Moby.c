/* SetLevelEntryExitAnimationMoby__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby Moby;

extern Moby *g_levelEntryExitAnimationMoby;

void SetLevelEntryExitAnimationMoby__FP4Moby(Moby *moby)
{
    g_levelEntryExitAnimationMoby = moby;
}
