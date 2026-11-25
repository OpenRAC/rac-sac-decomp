/* ShouldLeaveState__C14TangleVineTrap -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word equals 3.
 */

typedef struct Leaf {
    int value;
} Leaf;

typedef struct Mid {
    char pad[0xC];
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[0x4];
    Mid *mid;
} State;

int ShouldLeaveState__C14TangleVineTrap(State *self)
{
    return self->mid->leaf->value == 3;
}
