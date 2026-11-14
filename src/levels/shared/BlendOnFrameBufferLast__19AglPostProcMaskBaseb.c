/* BlendOnFrameBufferLast__19AglPostProcMaskBaseb -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglPostProcMaskBase AglPostProcMaskBase;

struct AglPostProcMaskBase
{
    char pad_00[0x28];
    unsigned char blendOnFrameBufferLast;
};

void BlendOnFrameBufferLast__19AglPostProcMaskBaseb(AglPostProcMaskBase *self, unsigned int value)
{
    self->blendOnFrameBufferLast = value;
}
