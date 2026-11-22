/* WAD_FindAssetsByType__F14WAD_ASSET_TYPEP10WAD_HEADER -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/WAD_FindAssetsByType__F14WAD_ASSET_TYPEP10WAD_HEADER_LEVEL_01.c.
 */

typedef struct ListNode {
    char pad_00[0x64];
    int key;
    char pad_68[8];
    struct ListNode *next;
} ListNode;

typedef struct ListTable {
    int count;
    ListNode *entries[1];
} ListTable;

ListNode *WAD_FindAssetsByType__F14WAD_ASSET_TYPEP10WAD_HEADER(int index, ListTable *lists)
{
    ListNode *node;

    if (lists == 0)
        return 0;

    node = lists->entries[index];
    if (node != 0) {
        do {
            if (node->key == index)
                break;
            node = node->next;
        } while (node != 0);
    }
    return node;
}
