/* GetNumFree__C11ApeFreeList -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the number of free entries, the word at offset 0x14.
 */

typedef struct ApeFreeList ApeFreeList;

struct ApeFreeList
{
    char pad_00[0x14];
    int numFree;
    char pad_18[0x10];
};

int GetNumFree__C11ApeFreeList(const ApeFreeList *self)
{
    return self->numFree;
}
