/* GetTexture__19AglRenderTargetBase -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word reached by two loads from the receiver.
 */

typedef struct Node {
    char pad[0xC];
    int value;
} Node;

typedef struct State {
    char pad[0xE0];
    Node *field;
} State;

int GetTexture__19AglRenderTargetBase(State *self)
{
    return self->field->value;
}
