/* GetDoF__19AglRenderTargetBase -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word reached by two loads from the receiver.
 */

typedef struct Node {
    char pad[0x4];
    int value;
} Node;

typedef struct State {
    char pad[0xF8];
    Node *field;
} State;

int GetDoF__19AglRenderTargetBase(State *self)
{
    return self->field->value;
}
