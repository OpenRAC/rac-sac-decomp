/* SetParent__20AmoeboidSmall_BuddedP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument through two loaded pointers.
 */

typedef struct Node {
    int slot;
} Node;

typedef struct Mid {
    char pad[0xC];
    Node *node;
} Mid;

typedef struct State {
    char pad[0x4];
    Mid *field;
} State;

void SetParent__20AmoeboidSmall_BuddedP4Moby(State *self, int value)
{
    self->field->node->slot = value;
}
