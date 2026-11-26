/* GetShaderName__C15AglMaterialBase -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word reached by two loads from the receiver.
 */

typedef struct Node {
    int value;
} Node;

typedef struct State {
    char pad[0x10];
    Node *field;
} State;

int GetShaderName__C15AglMaterialBase(State *self)
{
    return self->field->value;
}
