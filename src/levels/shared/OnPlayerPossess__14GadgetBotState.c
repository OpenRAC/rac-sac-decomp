/* OnPlayerPossess__14GadgetBotState -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one word reached through two pointers, plus 284.
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

int OnPlayerPossess__14GadgetBotState(State *self)
{
    return self->mid->leaf->value + 284;
}
