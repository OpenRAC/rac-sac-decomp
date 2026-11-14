/* LLSOUND_SetSoundAssetInvalid__FR18SOUND_ASSET_HANDLE -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef int SOUND_ASSET_HANDLE;

void LLSOUND_SetSoundAssetInvalid__FR18SOUND_ASSET_HANDLE(SOUND_ASSET_HANDLE *handle)
{
    *handle = 0;
}
