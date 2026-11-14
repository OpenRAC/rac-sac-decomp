/* SetCompositor__20APEGDE_BoneComponentP17ApeAnimCompositor -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct APEGDE_BoneComponent APEGDE_BoneComponent;
typedef struct ApeAnimCompositor ApeAnimCompositor;

struct APEGDE_BoneComponent {
    unsigned char unknown_000[0x0C];
    ApeAnimCompositor *compositor;
};

void SetCompositor__20APEGDE_BoneComponentP17ApeAnimCompositor(
    APEGDE_BoneComponent *self, ApeAnimCompositor *compositor)
{
    self->compositor = compositor;
}
