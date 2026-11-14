/* GetSurface__C14AglTextureBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglTextureBase AglTextureBase;

struct AglTextureBase
{
    char pad_00[0xB0];
    void *surface;
};

void *GetSurface__C14AglTextureBase(const AglTextureBase *self)
{
    return self->surface;
}
