/* Init__15StealthTakeDownPC21StealthTakeDownConfig -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The method stores the composer in the field at offset 0x0C of the component
 * and returns; no stack frame is reserved.
 */

typedef struct APEGDE_BoneComponent APEGDE_BoneComponent;
typedef struct ApeAnimCompositor ApeAnimCompositor;

struct APEGDE_BoneComponent {
    unsigned char unknown_000[0x0C];
    ApeAnimCompositor *compositor;
};

void Init__15StealthTakeDownPC21StealthTakeDownConfig(
    APEGDE_BoneComponent *self, ApeAnimCompositor *compositor)
{
    self->compositor = compositor;
}
