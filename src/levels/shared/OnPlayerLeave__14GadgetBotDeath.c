/* OnPlayerLeave__14GadgetBotDeath -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one word reached through two pointers, plus 196.
 */

typedef struct Leaf {
    char pad[0x58];
    int value;
} Leaf;

typedef struct Mid {
    char pad[0x10];
    Leaf *leaf;
} Mid;

typedef struct State {
    char pad[0x4];
    Mid *mid;
} State;

int OnPlayerLeave__14GadgetBotDeath(State *self)
{
    return self->mid->leaf->value + 196;
}
