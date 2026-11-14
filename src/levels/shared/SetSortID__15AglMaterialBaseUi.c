/* SetSortID__15AglMaterialBaseUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMaterialBase AglMaterialBase;

struct AglMaterialBase
{
    char pad_00[0x2C];
    unsigned int sortID;
};

void SetSortID__15AglMaterialBaseUi(AglMaterialBase *self, unsigned int id)
{
    self->sortID = id;
}
