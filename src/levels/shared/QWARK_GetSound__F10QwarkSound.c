/* QWARK_GetSound__F10QwarkSound -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct QwarkSoundEntry {
    int a;
    int b;
} QwarkSoundEntry;

extern QwarkSoundEntry g_qwarkSounds[];

QwarkSoundEntry *QWARK_GetSound__F10QwarkSound(int index)
{
    return &g_qwarkSounds[index];
}
