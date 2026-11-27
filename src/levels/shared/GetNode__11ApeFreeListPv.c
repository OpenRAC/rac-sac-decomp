/* GetNode__11ApeFreeListPv -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The node header sits 16 bytes before the list object.
 */

typedef struct ApeFreeList ApeFreeList;

void *GetNode__11ApeFreeListPv(ApeFreeList *self, void *block)
{
    (void)block;
    return (char *)self - 16;
}
