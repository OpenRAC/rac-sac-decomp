/* BeginMaterial__Q218Shader_SAC_Skinned21AglShader_SAC_SkinnedP11AglMaterial -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMaterial AglMaterial;
typedef struct Shader_SAC_Skinned Shader_SAC_Skinned;

extern char D_FE_251F58;

extern void SetMaterialState__9AglShaderP11AglMaterial18AglPs2VU1MicroCode(
    Shader_SAC_Skinned *self, AglMaterial *material, int microCode);

void BeginMaterial__Q218Shader_SAC_Skinned21AglShader_SAC_SkinnedP11AglMaterial(
    Shader_SAC_Skinned *self, AglMaterial *material)
{
    SetMaterialState__9AglShaderP11AglMaterial18AglPs2VU1MicroCode(self, material,
                                                                    7);
    D_FE_251F58 = 1;
}
