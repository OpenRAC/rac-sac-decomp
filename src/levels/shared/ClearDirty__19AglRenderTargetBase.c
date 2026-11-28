/* ClearDirty__19AglRenderTargetBase -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears bit 16 of the flags word at offset 0x30.
 */

typedef struct AglRenderTargetBase {
    char pad[0x30];
    unsigned long long flags;
} AglRenderTargetBase;

void ClearDirty__19AglRenderTargetBase(AglRenderTargetBase *self)
{
    self->flags &= ~0x10000ULL;
}
