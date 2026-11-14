/* SetAllocator__11ApeFreeListP12ApeAllocator -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeFreeList ApeFreeList;
typedef struct ApeAllocator ApeAllocator;

struct ApeFreeList
{
    char pad_00[0x24];
    ApeAllocator *allocator;
};

void SetAllocator__11ApeFreeListP12ApeAllocator(ApeFreeList *self, ApeAllocator *allocator)
{
    self->allocator = allocator;
}
