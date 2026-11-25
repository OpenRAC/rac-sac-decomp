/* InvalidateLights__11ApeInstance -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears one word through one pointer.
 */

typedef struct Node {
    char pad[0x4];
    int slot;
} Node;

typedef struct State {
    char pad[0x110];
    Node *field;
} State;

void InvalidateLights__11ApeInstance(State *self)
{
    self->field->slot = 0;
}
