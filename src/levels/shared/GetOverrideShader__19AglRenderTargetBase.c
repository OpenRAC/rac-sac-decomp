/* GetOverrideShader__19AglRenderTargetBase -- 8 bytes.
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

AglShader *GetOverrideShader__19AglRenderTargetBase(AglRenderTargetBase *self)
{
    return self->overrideShader;
}
