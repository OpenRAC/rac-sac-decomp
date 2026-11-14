/* AddMesh__14AglIRenderListR22AglSubMeshRenderParamsG20AglRenderListSortKey -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Appends a render entry to the render list: the sort key is stored at the
 * current write pointer, the submesh render parameters pointer at the
 * following word, and the write pointer then advances by 8.
 */

typedef struct AglRenderListSortKey AglRenderListSortKey;
typedef struct AglSubMeshRenderParams AglSubMeshRenderParams;
typedef struct AglRenderListEntry AglRenderListEntry;
typedef struct AglIRenderList AglIRenderList;

struct AglRenderListEntry
{
    void *sortKey;
    void *params;
};

struct AglIRenderList
{
    void *unknown;
    AglRenderListEntry *entries;
};

void AddMesh__14AglIRenderListR22AglSubMeshRenderParamsG20AglRenderListSortKey(
    AglIRenderList *self,
    AglSubMeshRenderParams *params,
    AglRenderListSortKey *sortKey)
{
    self->entries->sortKey = sortKey;
    self->entries->params = params;
    self->entries = self->entries + 1;
}
