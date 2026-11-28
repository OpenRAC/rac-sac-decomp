/* CLANK_GetSound__F10ClankSound -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ClankSoundEntry {
    int a;
    int b;
} ClankSoundEntry;

extern ClankSoundEntry g_clankSounds[];

ClankSoundEntry *CLANK_GetSound__F10ClankSound(int index)
{
    return &g_clankSounds[index];
}
