/* GetMask__19AglPostProcMaskBaseUc -- 24 bytes. */

typedef struct AglPostProcMaskBase {
    char pad[0x14];
    int *masks;
} AglPostProcMaskBase;

int GetMask__19AglPostProcMaskBaseUc(AglPostProcMaskBase *self, unsigned char i)
{
    unsigned int idx = i;
    idx <<= 2;
    return *(int *)((char *)self->masks + idx);
}
