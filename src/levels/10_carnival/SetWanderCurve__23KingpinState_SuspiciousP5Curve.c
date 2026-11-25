/* SetWanderCurve__23KingpinState_SuspiciousP5Curve -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument through two loaded pointers.
 */

typedef struct Node {
    char pad[0x8];
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

void SetWanderCurve__23KingpinState_SuspiciousP5Curve(State *self, int value)
{
    self->field->node->slot = value;
}
