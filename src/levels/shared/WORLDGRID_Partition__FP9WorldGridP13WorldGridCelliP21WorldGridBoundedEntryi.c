/* WORLDGRID_Partition__FP9WorldGridP13WorldGridCelliP21WorldGridBoundedEntryi -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_09B7F8.c.
 */

typedef struct {
    int value;
    unsigned short start;
    unsigned short count;
} Entry;

typedef struct {
    char pad_00[10];
    short index;
    char pad_0C[4];
} Link;

typedef struct {
    int width;
    int height;
    char pad_08[0x58];
    Entry *entries;
    Link *links;
} Grid;

void WORLDGRID_Partition__FP9WorldGridP13WorldGridCelliP21WorldGridBoundedEntryi(Grid *grid, Entry *entries, void *unused, Link *links)
{
    int next = 0;
    int i = 0;
    int height = grid->height;
    int width = grid->width;
    int total = width * height;

    grid->links = links;
    grid->entries = entries;
    while (i < total) {
        Entry *entry = entries + i;
        unsigned int count = entry->count;
        if (count != 0) {
            int j = count;
            int offset = next * 0x10 + 10;
            short *index = (short *)((char *)links + offset);
            do {
                *index = i;
                --j;
                index = (short *)((char *)index + 0x10);
            } while (j != 0);
        }
        entry->start = next;
        entry->value = 0;
        entry->count = 0;
        next += count;
        ++i;
    }
    entries[total].start = next;
    entries[total].value = 0;
    entries[total].count = 0;
}
