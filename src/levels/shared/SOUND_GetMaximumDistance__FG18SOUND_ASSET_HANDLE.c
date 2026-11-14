/* SOUND_GetMaximumDistance__FG18SOUND_ASSET_HANDLE -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SOUND_ASSET_HANDLE SOUND_ASSET_HANDLE;

struct SOUND_ASSET_HANDLE
{
    int x;
};

float SOUND_GetMaximumDistance__FG18SOUND_ASSET_HANDLE(SOUND_ASSET_HANDLE *unused)
{
    (void)unused;
    return 0.0f;
}
