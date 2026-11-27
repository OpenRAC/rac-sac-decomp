/* GetLogging__7ApeFile -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned char g_logging;

int GetLogging__7ApeFile(void)
{
    return g_logging & 1;
}
