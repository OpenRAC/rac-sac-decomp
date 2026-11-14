/* Arena3FlippyFloor_Reset__FP4Moby -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby Moby;

extern void Arena3FlippyFloor_ResetMobyToFlip__FP4Moby(Moby *moby);
extern void MOBY_Reset__FP4Moby(Moby *moby);

void Arena3FlippyFloor_Reset__FP4Moby(Moby *moby)
{
    Arena3FlippyFloor_ResetMobyToFlip__FP4Moby(moby);
    MOBY_Reset__FP4Moby(moby);
}
