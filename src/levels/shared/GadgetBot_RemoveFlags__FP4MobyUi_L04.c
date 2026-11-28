/* GadgetBot_RemoveFlags__FP4MobyUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Node {
    char pad[0x21C];
    unsigned int slot;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void GadgetBot_RemoveFlags__FP4MobyUi(State *self, unsigned int flags)
{
    self->field->slot &= ~flags;
}
