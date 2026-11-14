/* SetSortLayer__15AglMaterialBase13AglESortLayer -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglMaterialBase AglMaterialBase;

struct AglMaterialBase
{
    char pad_00[0x29];
    unsigned char sortLayer;
};

void SetSortLayer__15AglMaterialBase13AglESortLayer(AglMaterialBase *self, unsigned int layer)
{
    self->sortLayer = layer;
}
