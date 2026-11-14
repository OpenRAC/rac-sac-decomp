/* GetType__C19AglRenderTargetBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglRenderTargetBase AglRenderTargetBase;

struct AglRenderTargetBase
{
    char pad_00[0x30];
    unsigned char type;
};

unsigned int GetType__C19AglRenderTargetBase(const AglRenderTargetBase *self)
{
    return self->type;
}
