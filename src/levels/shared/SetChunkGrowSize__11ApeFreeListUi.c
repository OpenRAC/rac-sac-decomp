/* SetChunkGrowSize__11ApeFreeListUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the chunk grow size as a halfword at offset 0x30.
 */

typedef struct ApeFreeList ApeFreeList;

struct ApeFreeList
{
    char pad_00[0x30];
    unsigned short chunkGrowSize;
};

void SetChunkGrowSize__11ApeFreeListUi(ApeFreeList *self, unsigned int size)
{
    self->chunkGrowSize = size;
}
