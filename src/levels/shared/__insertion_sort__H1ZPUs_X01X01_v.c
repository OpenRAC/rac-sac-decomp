/* __insertion_sort__H1ZPUs_X01X01_v -- 168 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_037270.c.
 */

extern void *memmove(void *destination, const void *source, unsigned int size);
extern void __unguarded_linear_insert__H2ZPUsZUs_X01X11_v(unsigned short *slot, unsigned int value);

void __insertion_sort__H1ZPUs_X01X01_v(unsigned short *first, unsigned short *last)
{
    unsigned short *slot;
    unsigned short *next;

    if (first == last) {
        return;
    }
    slot = first + 1;
    if (slot == last) {
        return;
    }
    for (;;) {
        unsigned int value = *slot;
        if (value < (unsigned int)*first) {
            int count = slot - first;
            slot++;
            memmove(slot - count, first, count * 2);
            *first = value;
            next = slot;
        } else {
            __unguarded_linear_insert__H2ZPUsZUs_X01X11_v(slot, value);
            next = slot + 1;
        }
        slot = next;
        if (slot == last) {
            break;
        }
    }
}
