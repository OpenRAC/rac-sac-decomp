/* GetSurface__19AglRenderTargetBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglRenderTargetBase AglRenderTargetBase;

struct AglRenderTargetBase
{
    char pad_00[0xE0];
    void *surface;
};

void *GetSurface__19AglRenderTargetBase(AglRenderTargetBase *self)
{
    return self->surface;
}
