/* __final_insertion_sort__H1ZPUs_X01X01_v -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Short ranges go to one copy; long ranges split at first+0x20.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_037368.c.
 */

extern void __insertion_sort__H1ZPUs_X01X01_v(char *, char *);
extern void __unguarded_insertion_sort_aux__H2ZPUsZUs_X01X01PX11_v(char *, char *, int);

void __final_insertion_sort__H1ZPUs_X01X01_v(char *first, char *last)
{
    int span = ((int)last - (int)first) >> 1;
    char *middle;
    if (span >= 0x11) {
        middle = first + 0x20;
        __insertion_sort__H1ZPUs_X01X01_v(first, middle);
        __unguarded_insertion_sort_aux__H2ZPUsZUs_X01X01PX11_v(middle, last, 0);
    } else {
        __insertion_sort__H1ZPUs_X01X01_v(first, last);
    }
}
