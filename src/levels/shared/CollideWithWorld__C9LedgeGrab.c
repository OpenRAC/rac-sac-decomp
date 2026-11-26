/* CollideWithWorld__C9LedgeGrab -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word equals 6.
 */

typedef struct Leaf {
    char pad[0x10];
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

int CollideWithWorld__C9LedgeGrab(State *self)
{
    return self->mid->leaf->value == 6;
}
