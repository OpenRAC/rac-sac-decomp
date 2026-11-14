/* GetUseZPass__C21AglStencilShadowsBase -- 8 bytes.
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

unsigned int GetUseZPass__C21AglStencilShadowsBase(const AglStencilShadowsBase *self)
{
    return self->useZPass;
}
