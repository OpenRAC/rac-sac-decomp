/* SetNextLevel__Fi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_nextLevel;

void SetNextLevel__Fi(int level)
{
    g_nextLevel = level;
}
