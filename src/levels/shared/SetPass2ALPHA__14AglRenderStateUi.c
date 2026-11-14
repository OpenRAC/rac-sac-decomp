/* SetPass2ALPHA__14AglRenderStateUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglRenderState AglRenderState;

struct AglRenderState
{
    char pad_00[0x16];
    unsigned short pass2alpha;
};

void SetPass2ALPHA__14AglRenderStateUi(AglRenderState *self, unsigned int value)
{
    self->pass2alpha = value;
}
