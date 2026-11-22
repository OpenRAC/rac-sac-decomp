/* TriggerCollection_Remove__FP4MobyP7Trigger -- 96 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_1DB6A0.c.
 */

/* Removes the first matching pointer by moving the final entry into its slot.
 * Pinned isolated links reproduce all five 96-byte placements. */
typedef struct List {
    char pad_00[0x45];
    unsigned char count;
    char pad_46[0xE];
    void **items;
} List;

void TriggerCollection_Remove__FP4MobyP7Trigger(List *list, void *needle)
{
    unsigned int i;
    void **items = list->items;
    for (i = 0; i < list->count; i++) {
        if (items[i] == needle) {
            void **last;
            list->count--;
            last = items + list->count;
            items[i] = *last;
            return;
        }
    }
}
