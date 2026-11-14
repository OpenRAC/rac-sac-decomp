/* SOUND_IsSoundAssetValid__FG18SOUND_ASSET_HANDLE -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SOUND_ASSET_HANDLE SOUND_ASSET_HANDLE;

struct SOUND_ASSET_HANDLE
{
    int x;
};

int SOUND_IsSoundAssetValid__FG18SOUND_ASSET_HANDLE(SOUND_ASSET_HANDLE *ptr)
{
    return ptr->x != 0;
}
