/* Begin__17Arena4Camera_Idle -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one byte reached through four pointers.
 */

typedef struct Byte {
    char pad[69];
    unsigned char value;
} Byte;

typedef struct Tail {
    char pad[52];
    Byte *byte;
} Tail;

typedef struct Leaf {
    char pad[84];
    Tail *tail;
} Leaf;

typedef struct Mid {
    char pad[16];
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[4];
    Mid *mid;
} State;

void Begin__17Arena4Camera_Idle(State *self)
{
    self->mid->leaf->tail->byte->value = 0;
}
