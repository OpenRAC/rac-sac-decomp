/* LLSOUND_IsSoundAssetValid__FRC18SOUND_ASSET_HANDLE -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns whether the word at offset 0x0 is non-zero.
 */

typedef struct State {
    int field;
} State;

int LLSOUND_IsSoundAssetValid__FRC18SOUND_ASSET_HANDLE(State *self)
{
    return self->field != 0;
}
