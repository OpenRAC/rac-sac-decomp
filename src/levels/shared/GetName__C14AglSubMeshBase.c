/* GetName__C14AglSubMeshBase -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeFreeList ApeFreeList;

struct ApeFreeList
{
    char pad_00[0x14];
    int numFree;
    char pad_18[0x10];
};

int GetName__C14AglSubMeshBase(const ApeFreeList *self)
{
    return self->numFree;
}
