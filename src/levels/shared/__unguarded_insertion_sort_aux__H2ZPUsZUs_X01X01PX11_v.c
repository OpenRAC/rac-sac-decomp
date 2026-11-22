/* __unguarded_insertion_sort_aux__H2ZPUsZUs_X01X01PX11_v -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_03BD60.c.
 */

extern void __unguarded_linear_insert__H2ZPUsZUs_X01X11_v(unsigned short *slot, unsigned int value);

void __unguarded_insertion_sort_aux__H2ZPUsZUs_X01X01PX11_v(unsigned short *first, unsigned short *last, int unused)
{
    if (first != last) {
        unsigned int value = *first;
        for (;;) {
            unsigned short *next = first + 1;
            __unguarded_linear_insert__H2ZPUsZUs_X01X11_v(first, value);
            first = next;
            if (first == last)
                break;
            value = *first;
        }
    }
}
