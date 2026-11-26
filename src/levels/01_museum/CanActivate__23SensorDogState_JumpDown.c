/* CanActivate__23SensorDogState_JumpDown -- 24 bytes.
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
    char pad[16];
    Mid *mid;
} Outer;

typedef struct State {
    char pad[4];
    Outer *outer;
} State;

int CanActivate__23SensorDogState_JumpDown(State *self)
{
    return self->outer->mid->value == 2;
}
