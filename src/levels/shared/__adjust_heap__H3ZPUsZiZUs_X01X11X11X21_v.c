/* __adjust_heap__H3ZPUsZiZUs_X01X11X11X21_v -- 172 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_036E20.c.
 */

extern void __push_heap__H3ZPUsZiZUs_X01X11X11X21_v(unsigned short *heap, int hole, int start, unsigned short value);

void __adjust_heap__H3ZPUsZiZUs_X01X11X11X21_v(unsigned short *heap, int hole, int count, unsigned short value)
{
    int start = hole;
    int child = hole * 2 + 2;

    while (child < count) {
        if (heap[child] < heap[child - 1]) {
            child--;
        }
        heap[hole] = heap[child];
        hole = child;
        child = (hole + 1) * 2;
    }
    if (child == count) {
        heap[hole] = heap[child - 1];
        hole = child - 1;
    }
    __push_heap__H3ZPUsZiZUs_X01X11X11X21_v(heap, hole, start, value);
}
