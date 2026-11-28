/* GetIconTextureID__14DrawObjManagerUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Icon {
    int pad;
    int textureId;
} Icon;

extern Icon D_FE_000F59D8[];

int GetIconTextureID__14DrawObjManagerUi(unsigned int iconId)
{
    return D_FE_000F59D8[iconId].textureId;
}
