/* Dirty__19AglRenderTargetBase -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglRenderTargetBase {
    char pad[0x30];
    unsigned long long flags;
} AglRenderTargetBase;

void Dirty__19AglRenderTargetBase(AglRenderTargetBase *self)
{
    self->flags |= 0x10000ULL;
}
