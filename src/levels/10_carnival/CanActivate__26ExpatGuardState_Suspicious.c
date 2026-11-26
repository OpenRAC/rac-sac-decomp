/* CanActivate__26ExpatGuardState_Suspicious -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word is 2.
 */

typedef struct Tail {
    char pad[152];
    unsigned int value;
} Tail;

typedef struct Leaf {
    char pad[88];
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

int CanActivate__26ExpatGuardState_Suspicious(State *self)
{
    return self->mid->leaf->tail->value == 2;
}
