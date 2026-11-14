/* SetShader__15AglMaterialBaseP16AglShaderProfile -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglShaderProfile AglShaderProfile;
typedef struct AglMaterialBase AglMaterialBase;

struct AglMaterialBase
{
    char pad_00[0x10];
    AglShaderProfile *shader;
};

void SetShader__15AglMaterialBaseP16AglShaderProfile(AglMaterialBase *self, AglShaderProfile *shader)
{
    self->shader = shader;
}
