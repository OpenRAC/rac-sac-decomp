/* CanActivate__26Doppleganger_DisguisedIdle -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the byte with its low bit flipped.
 */

typedef struct Tail {
    char pad[61];
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

int CanActivate__26Doppleganger_DisguisedIdle(State *self)
{
    return self->mid->leaf->tail->value ^ 1;
}
