/* GetAllocSize__C11ApeFreeList -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the allocation size, the word at offset 0x28.
 */

typedef struct ApeFreeList ApeFreeList;

struct ApeFreeList
{
    char pad_00[0x28];
    int allocSize;
};

int GetAllocSize__C11ApeFreeList(const ApeFreeList *self)
{
    return self->allocSize;
}
