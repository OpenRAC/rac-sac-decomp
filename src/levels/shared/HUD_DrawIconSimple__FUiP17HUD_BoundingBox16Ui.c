/* HUD_DrawIconSimple__FUiP17HUD_BoundingBox16Ui -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AglTexture AglTexture;
typedef struct HUD_BoundingBox16 HUD_BoundingBox16;

extern unsigned int GetIconTextureID__14DrawObjManagerUi(unsigned int iconId);
extern void HUD_DrawTextureSimpleArea__FP10AglTextureP17HUD_BoundingBox16Ui(
    AglTexture *texture, HUD_BoundingBox16 *box, unsigned int color);

void HUD_DrawIconSimple__FUiP17HUD_BoundingBox16Ui(unsigned int iconId, HUD_BoundingBox16 *box, unsigned int color)
{
    unsigned int texture = GetIconTextureID__14DrawObjManagerUi(iconId);
    HUD_DrawTextureSimpleArea__FP10AglTextureP17HUD_BoundingBox16Ui(
        (AglTexture *)texture, box, color);
}
