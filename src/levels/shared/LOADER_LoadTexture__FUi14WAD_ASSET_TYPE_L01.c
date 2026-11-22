/* LOADER_LoadTexture__FUi14WAD_ASSET_TYPE -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_12B1C8.c.
 */

extern void *LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(unsigned int kind, int count);
extern int TEXMGR_LoadTexture__FP15WAD_FILE_HEADER(void *value);

int LOADER_LoadTexture__FUi14WAD_ASSET_TYPE(unsigned int kind, int count)
{
    void *value = LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(kind, count);
    return TEXMGR_LoadTexture__FP15WAD_FILE_HEADER(value);
}
