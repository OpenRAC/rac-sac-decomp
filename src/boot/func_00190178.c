/* __mcmp -- 104 bytes.
 *
 * A function of the boot executable at 0x00190178; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__mcmp.c.
 */

/* __mcmp, (newlib mprec): compares two big integers by word count, then by words from the top. */
struct _Bigint {
    struct _Bigint *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
int __mcmp(struct _Bigint *a, struct _Bigint *b)
{
    unsigned int *xa, *xa0, *xb, *xb0;
    int i, j;
    i = a->_wds;
    j = b->_wds;
    if (i -= j) return i;
    xa0 = a->_x;
    xa = xa0 + j;
    xb0 = b->_x;
    xb = xb0 + j;
    for (;;) {
        if (*--xa != *--xb) return *xa < *xb ? -1 : 1;
        if (xa <= xa0) break;
    }
    return 0;
}
