/* CanActivate__13Amoeboid_Path -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the byte with its low bit flipped.
 */

typedef struct Tail {
    char pad[144];
    unsigned char value;
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

int CanActivate__13Amoeboid_Path(State *self)
{
    return self->mid->leaf->tail->value ^ 1;
}
