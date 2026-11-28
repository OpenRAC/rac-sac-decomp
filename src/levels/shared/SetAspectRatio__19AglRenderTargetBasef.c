/* SetAspectRatio__19AglRenderTargetBasef -- 24 bytes. */

typedef struct AglRenderTargetBase {
    char pad[0x30];
    unsigned long long flags;
    char pad38[0x18];
    float aspect;
} AglRenderTargetBase;

void SetAspectRatio__19AglRenderTargetBasef(AglRenderTargetBase *self, float aspect)
{
    self->aspect = aspect;
    self->flags |= 0x10000ULL;
}
