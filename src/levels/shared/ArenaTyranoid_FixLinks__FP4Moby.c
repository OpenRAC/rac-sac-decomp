/* ArenaTyranoid_FixLinks__FP4Moby -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The navigate object of the moby is at offset 0x54.
 */

typedef struct Moby Moby;
typedef struct Navigate Navigate;

struct Moby {
    unsigned char reserved_000[0x54];
    Navigate *navigate;
};

extern void Navigate_FixLinks__FP8Navigate(Navigate *navigate);

void ArenaTyranoid_FixLinks__FP4Moby(Moby *moby)
{
    Navigate_FixLinks__FP8Navigate(moby->navigate);
}
