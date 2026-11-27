/* GetNumAllocPtl__C17AglEmitProperties -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

unsigned int GetNumAllocPtl__C17AglEmitProperties(const unsigned char *self)
{
    unsigned int v;

    v = *(const unsigned short *)(self + 0x24);
    return v < 0x101u ? v : 0x100u;
}
