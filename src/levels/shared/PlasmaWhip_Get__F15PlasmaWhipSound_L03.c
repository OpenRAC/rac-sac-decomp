/* PlasmaWhip_Get__F15PlasmaWhipSound -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct PlasmaWhipSoundEntry {
    int a;
    int b;
} PlasmaWhipSoundEntry;

extern PlasmaWhipSoundEntry g_plasmaWhipSounds[];

PlasmaWhipSoundEntry *PlasmaWhip_Get__F15PlasmaWhipSound(int index)
{
    return &g_plasmaWhipSounds[index];
}
