/* __make_heap__H3ZPUsZUsZi_X01X01PX11PX21_v -- 136 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the upper half of a halfword array, calling the partition helper per
 * step.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_036ED0.c.
 */

extern void __adjust_heap__H3ZPUsZiZUs_X01X11X11X21_v(unsigned short *base, int index, int count, unsigned short value);

void __make_heap__H3ZPUsZUsZi_X01X01PX11PX21_v(unsigned short *base, unsigned short *end, int unused1, int unused2)
{
    int count = end - base;
    int index;

    if (count < 2)
        return;
    index = (count - 2) / 2;
    while (1) {
        __adjust_heap__H3ZPUsZiZUs_X01X11X11X21_v(base, index, count, base[index]);
        if (index == 0)
            return;
        index--;
    }
}
