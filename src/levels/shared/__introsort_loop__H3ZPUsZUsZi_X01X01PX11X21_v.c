/* __introsort_loop__H3ZPUsZUsZi_X01X01PX11X21_v -- 272 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Introsort loop over unsigned 16-bit values.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_037128.c.
 */

typedef unsigned short u16;
extern void __partial_sort__H2ZPUsZUs_X01X01X01PX11_v(u16 *a, u16 *b, u16 *c, u16 *d);
extern u16 *__unguarded_partition__H2ZPUsZUs_X01X01X11_X01(u16 *a, u16 *b, u16 v);

static inline u16 *med(u16 *a, u16 *b, u16 *c)
{
    if (*a < *b) {
        if (*b < *c) {
            return b;
        } else if (*a < *c) {
            return c;
        } else {
            return a;
        }
    } else if (*a < *c) {
        return a;
    } else if (*b < *c) {
        return c;
    } else {
        return b;
    }
}

void __introsort_loop__H3ZPUsZUsZi_X01X01PX11X21_v(u16 *first, u16 *last, u16 *unused, int depth)
{
    u16 *cut;

    while (last - first > 16) {
        if (depth == 0) {
            __partial_sort__H2ZPUsZUs_X01X01X01PX11_v(first, last, last, 0);
            return;
        }
        --depth;
        cut = __unguarded_partition__H2ZPUsZUs_X01X01X11_X01(first, last, *med(first, first + (last - first) / 2, last - 1));
        __introsort_loop__H3ZPUsZUsZi_X01X01PX11X21_v(cut, last, 0, depth);
        last = cut;
    }
}
