/* SetOverrideShader__19AglRenderTargetBaseP9AglShader -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglShader AglShader;
typedef struct AglRenderTargetBase AglRenderTargetBase;

struct AglRenderTargetBase
{
    char pad_00[0xFC];
    AglShader *overrideShader;
};

void SetOverrideShader__19AglRenderTargetBaseP9AglShader(AglRenderTargetBase *self, AglShader *shader)
{
    self->overrideShader = shader;
}
