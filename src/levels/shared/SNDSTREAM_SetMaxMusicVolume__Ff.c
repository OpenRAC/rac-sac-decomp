/* SNDSTREAM_SetMaxMusicVolume__Ff -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern float g_maxMusicVolume;

void SNDSTREAM_SetMaxMusicVolume__Ff(float vol)
{
    g_maxMusicVolume = vol;
}
