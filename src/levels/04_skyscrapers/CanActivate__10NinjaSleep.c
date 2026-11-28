/* CanActivate__10NinjaSleep -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word is zero.
 */

typedef struct Tail {
    char pad[68];
    int value;
} Tail;

typedef struct Leaf {
    char pad[0x58];
    Tail *tail;
} Leaf;

typedef struct Mid {
    char pad[0x10];
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[0x4];
    Mid *mid;
} State;

int CanActivate__10NinjaSleep(State *self)
{
    return self->mid->leaf->tail->value == 0;
}
