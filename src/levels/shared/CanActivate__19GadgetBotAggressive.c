/* CanActivate__19GadgetBotAggressive -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns 1 when the word is 3.
 */

typedef struct Tail {
    char pad[516];
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

int CanActivate__19GadgetBotAggressive(State *self)
{
    return self->mid->leaf->tail->value == 3;
}
