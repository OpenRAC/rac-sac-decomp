/* GetSpecularColor__C15AglMaterialBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AVec4 AVec4;
typedef struct AglMaterialBase AglMaterialBase;

struct AVec4
{
    float x;
    float y;
    float z;
    float w;
};

struct AglMaterialBase
{
    char pad_00[0x40];
    AVec4 specularColor;
};

const AVec4 *GetSpecularColor__C15AglMaterialBase(const AglMaterialBase *self)
{
    return &self->specularColor;
}
