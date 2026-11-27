/* IsDirty__C19AglRenderTargetBase -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglRenderTargetBase {
    char pad[0x30];
    unsigned long long flags;
} AglRenderTargetBase;

int IsDirty__C19AglRenderTargetBase(const AglRenderTargetBase *self)
{
    unsigned long long w = self->flags;
    unsigned char b = (unsigned char)(w >> 16);
    return b & 1;
}
