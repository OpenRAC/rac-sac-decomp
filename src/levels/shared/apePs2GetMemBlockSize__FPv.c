/* apePs2GetMemBlockSize__FPv -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned int dl_mspace_get_block_size__17ApePs2MemHeapCodePv(void *block);

unsigned int apePs2GetMemBlockSize__FPv(void *block)
{
    return dl_mspace_get_block_size__17ApePs2MemHeapCodePv(block);
}
