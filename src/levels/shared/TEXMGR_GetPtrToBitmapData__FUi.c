/* TEXMGR_GetPtrToBitmapData__FUi -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct AgxTexture AgxTexture;

extern AgxTexture *GetTextureID__14DrawObjManagerUi(unsigned int id);
extern unsigned char *GetImagePtr__10AglTextureUc(AgxTexture *self, unsigned char mode);

unsigned char *TEXMGR_GetPtrToBitmapData__FUi(unsigned int id)
{
    AgxTexture *texture = GetTextureID__14DrawObjManagerUi(id);
    if (texture != 0)
        return GetImagePtr__10AglTextureUc(GetTextureID__14DrawObjManagerUi(id), 4);
    return 0;
}
