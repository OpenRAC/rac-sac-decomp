/* SelectShader__16AglShaderProfileP11AglMaterialR22AglSubMeshRenderParams -- 12 bytes.
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
    char pad[0x8];
    Node *field;
} State;

int SelectShader__16AglShaderProfileP11AglMaterialR22AglSubMeshRenderParams(State *self)
{
    return self->field->value;
}
