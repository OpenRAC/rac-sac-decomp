/* CanActivate__23AlertSuspiciousBehavior -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word equals 2.
 */

typedef struct Leaf {
    char pad[0x10];
    int value;
} Leaf;

typedef struct Mid {
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[0x10];
    Mid *mid;
} State;

int CanActivate__23AlertSuspiciousBehavior(State *self)
{
    return self->mid->leaf->value == 2;
}
