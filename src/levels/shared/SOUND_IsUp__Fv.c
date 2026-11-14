/* SOUND_IsUp__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned char g_soundIsUp;

unsigned char SOUND_IsUp__Fv(void)
{
    return g_soundIsUp;
}
