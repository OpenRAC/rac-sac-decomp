/* FountainPen_Term__FP4Moby -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word through one pointer.
 */

typedef struct Node {
    int slot;
} Node;

typedef struct State {
    char pad[0x58];
    Node *field;
} State;

void FountainPen_Term__FP4Moby(State *self)
{
    self->field->slot = 0;
}
