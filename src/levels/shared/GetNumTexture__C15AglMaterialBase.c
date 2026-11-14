/* GetNumTexture__C15AglMaterialBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMaterialBase AglMaterialBase;

struct AglMaterialBase
{
    char pad_00[0x28];
    unsigned char numTexture;
};

unsigned int GetNumTexture__C15AglMaterialBase(const AglMaterialBase *self)
{
    return self->numTexture;
}
