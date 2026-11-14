/* SetSpecularPower__15AglMaterialBasef -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMaterialBase AglMaterialBase;

struct AglMaterialBase
{
    char pad_00[0x50];
    float specularPower;
};

void SetSpecularPower__15AglMaterialBasef(AglMaterialBase *self, float power)
{
    self->specularPower = power;
}
