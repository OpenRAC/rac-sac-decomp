/* CanActivate__5Punch -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Leaf {
    char pad[0x98];
    int flags;
} Leaf;

typedef struct Mid {
    char pad[0x10];
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[4];
    Mid *mid;
} State;

int CanActivate__5Punch(State *self)
{
    return (self->mid->leaf->flags >> 5) & 1;
}
