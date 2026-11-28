/* SelectShader__Q218Shader_SAC_LitProp28AglShaderProfile_SAC_LitPropP11AglMaterialR22AglSubMeshRenderParams -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the word reached by three loads from the second argument.
 */

typedef struct Inner {
    int value;
} Inner;

typedef struct Mid {
    char pad[0x8];
    Inner *inner;
} Mid;

typedef struct State {
    char pad[0x10];
    Mid *field;
} State;

int SelectShader__Q218Shader_SAC_LitProp28AglShaderProfile_SAC_LitPropP11AglMaterialR22AglSubMeshRenderParams(int ignored, State *other)
{
    return other->field->inner->value;
}
