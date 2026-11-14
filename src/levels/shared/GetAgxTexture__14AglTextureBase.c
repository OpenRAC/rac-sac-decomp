/* GetAgxTexture__14AglTextureBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AgxTexture AgxTexture;
typedef struct AglTextureBase AglTextureBase;

struct AgxTexture
{
    int dummy;
};

struct AglTextureBase
{
    char pad_00[0x38];
    AgxTexture agxTexture;
};

AgxTexture *GetAgxTexture__14AglTextureBase(AglTextureBase *self)
{
    return &self->agxTexture;
}
