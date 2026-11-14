/* GetPass2ALPHA__C14AglRenderState -- 8 bytes.
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

unsigned int GetPass2ALPHA__C14AglRenderState(const AglRenderState *self)
{
    return self->pass2alpha;
}
