/* GetAnimData__15AglMaterialBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMaterialBase AglMaterialBase;

struct AglMaterialBase
{
    char pad_00[0x90];
    void *animData;
};

void *GetAnimData__15AglMaterialBase(AglMaterialBase *self)
{
    return self->animData;
}
