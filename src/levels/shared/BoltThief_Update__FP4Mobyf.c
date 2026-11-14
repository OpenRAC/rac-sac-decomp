/* BoltThief_Update__FP4Mobyf -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct StateMachine StateMachine;

typedef struct BoltThiefState {
    unsigned char pad_00[0xC4];
    unsigned int flag;
    unsigned char pad_C8[0x08];
} BoltThiefState;

typedef struct Moby {
    unsigned char pad_00[0x58];
    BoltThiefState *state;
} Moby;

extern void Update__12StateMachinef(StateMachine *machine, float elapsed);

void BoltThief_Update__FP4Mobyf(Moby *moby, float elapsed)
{
    BoltThiefState *state = moby->state;

    state->flag = 1;
    Update__12StateMachinef((StateMachine *)((char *)state + 0xD0), elapsed);
}
