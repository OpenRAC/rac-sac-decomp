/* __push_heap__H3ZPUsZiZUs_X01X11X11X21_v -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_03B7F8.c.
 */

void __push_heap__H3ZPUsZiZUs_X01X11X11X21_v(unsigned short *array, int index, int limit, unsigned short value)
{
    int parent = (index - 1) / 2;
    while (limit < index && array[parent] < value) {
        array[index] = array[parent];
        index = parent;
        parent = (index - 1) / 2;
    }
    array[index] = value;
}
