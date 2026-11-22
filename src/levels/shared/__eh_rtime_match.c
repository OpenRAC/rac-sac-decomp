/* __eh_rtime_match -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Asks the current handler object to process the argument and reports whether
 * it did.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/__eh_rtime_match_FRONTEND.c.
 */

typedef struct Handler { int (*fn)(struct Handler *self, int arg, int mode); } Handler;
extern int __get_eh_info(void);
int __eh_rtime_match(int arg)
{
    Handler *h = *(Handler **)__get_eh_info();
    int r;
    if (h->fn == 0) { r = 0; } else { r = h->fn(h, arg, 0) != 0; }
    return r;
}
