/* Level01MuseumHelpManager_DeathByLasers__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_museumDeathByLasers;

int Level01MuseumHelpManager_DeathByLasers__Fv(void)
{
    return ++g_museumDeathByLasers;
}
