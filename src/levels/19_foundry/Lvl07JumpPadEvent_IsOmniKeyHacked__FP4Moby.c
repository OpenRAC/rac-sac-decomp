/* Lvl07JumpPadEvent_IsOmniKeyHacked__FP4Moby -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the byte is 2.
 */

typedef struct Mid {
    char pad[69];
    unsigned char value;
} Mid;

typedef struct Outer {
    Mid *mid;
} Outer;

typedef struct Moby {
    char pad[84];
    Outer *outer;
} Moby;

int Lvl07JumpPadEvent_IsOmniKeyHacked__FP4Moby(Moby *self)
{
    return self->outer->mid->value == 2;
}
