/* Arena_ReCalcXPForChallenge_SpawnMoby__FP4Moby -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The signature table is indexed by a byte; the multiplication by 0x34 (the
 * entry size) is done by the three-operand mult of the EE.
 */

typedef struct Moby Moby;
typedef struct CHALLENGE CHALLENGE;
typedef struct ARENA_SIG ARENA_SIG;

struct ARENA_SIG {
    unsigned char reserved_000[0x20];
    unsigned int value;
    unsigned char reserved_024[0x10];
};

struct CHALLENGE {
    unsigned int reserved_000;
    ARENA_SIG *sigs;
    unsigned int reserved_008[10];
    unsigned int level_id;
};

struct Moby {
    unsigned char reserved_000[0x40];
    CHALLENGE *challenge;
    unsigned char index;
};

extern void Arena_ReCalcXpForChallenge_FromSigs__FUiUi(unsigned int a,
                                                        unsigned int b);

void Arena_ReCalcXPForChallenge_SpawnMoby__FP4Moby(Moby *moby)
{
    if (moby && moby->challenge) {
        Arena_ReCalcXpForChallenge_FromSigs__FUiUi(
            moby->challenge->level_id,
            moby->challenge->sigs[moby->index].value);
    }
}
