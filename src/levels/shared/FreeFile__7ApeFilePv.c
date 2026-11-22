/* FreeFile__7ApeFilePv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_1AED20.c.
 */

extern void _Free__6ApeMemPv10ApeMemPool(void *, int);

void FreeFile__7ApeFilePv(void *item)
{
    _Free__6ApeMemPv10ApeMemPool(item, 1);
}
