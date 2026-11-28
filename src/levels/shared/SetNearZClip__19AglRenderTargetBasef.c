/* SetNearZClip__19AglRenderTargetBasef -- 24 bytes. */

typedef struct AglRenderTargetBase {
    char pad[0x30];
    unsigned long long flags;
    float nearZ;
} AglRenderTargetBase;

void SetNearZClip__19AglRenderTargetBasef(AglRenderTargetBase *self, float z)
{
    self->nearZ = z;
    self->flags |= 0x10000ULL;
}
