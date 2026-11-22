/* AddString__8ApeWorldPCc -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_1707F8.c.
 */

extern void AddString__15ApeStringBufferPCc(int);

void AddString__8ApeWorldPCc(char *item)
{
    AddString__15ApeStringBufferPCc(*(int *)(item + 0x58));
}
