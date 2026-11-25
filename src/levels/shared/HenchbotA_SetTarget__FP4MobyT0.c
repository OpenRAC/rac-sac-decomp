/* HenchbotA_SetTarget__FP4MobyT0 -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument at offset 0x11C of the object loaded from offset 0x58.
 */

typedef struct Node {
    char pad[0x11C];
    int slot;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void HenchbotA_SetTarget__FP4MobyT0(State *self, int value)
{
    self->field->slot = value;
}
