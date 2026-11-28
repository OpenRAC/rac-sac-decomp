/* CanActivate__14HBA_GoToTarget -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Tail {
    char pad[0x11C];
    int value;
} Tail;

typedef struct Leaf {
    char pad[0x58];
    Tail *pvars;
} Leaf;

typedef struct Mid {
    char pad[0x10];
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[4];
    Mid *mid;
} State;

int CanActivate__14HBA_GoToTarget(State *self)
{
    return self->mid->leaf->pvars->value != 0;
}
