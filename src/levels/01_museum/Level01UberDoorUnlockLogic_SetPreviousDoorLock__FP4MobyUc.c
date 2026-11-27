/* Level01UberDoorUnlockLogic_SetPreviousDoorLock__FP4MobyUc -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct UberDoorInner {
    char pad[0x3C];
    unsigned char lock;
} UberDoorInner;

typedef struct Moby {
    char pad[0x45];
    unsigned char prevLock;
    char pad54[0x54 - 0x46];
    UberDoorInner *inner;
} Moby;

void Level01UberDoorUnlockLogic_SetPreviousDoorLock__FP4MobyUc(
    Moby *moby,
    unsigned char lock)
{
    UberDoorInner *inner;

    inner = moby->inner;
    moby->prevLock = lock;
    inner->lock = lock;
}
