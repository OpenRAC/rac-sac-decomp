/* SetUseZPass__21AglStencilShadowsBaseb -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglStencilShadowsBase AglStencilShadowsBase;

struct AglStencilShadowsBase
{
    char pad_00[0x40];
    unsigned char useZPass;
};

void SetUseZPass__21AglStencilShadowsBaseb(AglStencilShadowsBase *self, unsigned int value)
{
    self->useZPass = value;
}
