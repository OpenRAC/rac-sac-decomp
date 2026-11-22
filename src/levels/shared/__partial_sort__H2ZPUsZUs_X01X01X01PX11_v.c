/* __partial_sort__H2ZPUsZUs_X01X01X01PX11_v -- 168 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_036FF8.c.
 */

extern void __make_heap__H3ZPUsZUsZi_X01X01PX11PX21_v(unsigned short *heap, unsigned short *first, int unused1, int unused2);
extern void __adjust_heap__H3ZPUsZiZUs_X01X11X11X21_v(unsigned short *heap, int index, int count, unsigned short value);
extern void sort_heap__H1ZPUs_X01X01_v(unsigned short *heap, unsigned short *first);

void __partial_sort__H2ZPUsZUs_X01X01X01PX11_v(unsigned short *heap, unsigned short *first, unsigned short *last, unsigned short *tag)
{
    unsigned short *slot;
    unsigned short top;

    __make_heap__H3ZPUsZUsZi_X01X01PX11PX21_v(heap, first, 0, 0);
    slot = first;
    if (first < last) {
        do {
            top = heap[0];
            if (*slot < top) {
                unsigned short value = *slot;
                *slot = top;
                __adjust_heap__H3ZPUsZiZUs_X01X11X11X21_v(heap, 0, (int)(first - heap), value);
            }
            slot++;
        } while (slot < last);
    }
    sort_heap__H1ZPUs_X01X01_v(heap, first);
}
