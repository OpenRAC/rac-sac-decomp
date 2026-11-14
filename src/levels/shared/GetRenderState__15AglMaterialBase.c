/* GetRenderState__15AglMaterialBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglRenderState AglRenderState;
typedef struct AglMaterialBase AglMaterialBase;

struct AglRenderState
{
    int dummy;
};

struct AglMaterialBase
{
    char pad_00[0x58];
    AglRenderState renderState;
};

AglRenderState *GetRenderState__15AglMaterialBase(AglMaterialBase *self)
{
    return &self->renderState;
}
