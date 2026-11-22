/* _Balloc -- 168 bytes.
 *
 * A function of the boot executable at 0x0018F878; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_Balloc.c.
 */

/* _Balloc, (newlib mprec): takes a big-integer block of size class k from the per-reent free list, allocating the list and the block on demand. */
struct _Bigint {
    struct _Bigint *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
struct _reent {
    char pad00[0x4C];
    struct _Bigint **_freelist;
};
extern void *func_00190880(struct _reent *ptr, unsigned int n, unsigned int size);
struct _Bigint *_Balloc(struct _reent *ptr, int k)
{
    int x;
    struct _Bigint *rv;
    if (ptr->_freelist == 0) {
        ptr->_freelist = (struct _Bigint **)func_00190880(ptr, 4, 16);
        if (ptr->_freelist == 0) return 0;
    }
    if ((rv = ptr->_freelist[k]) != 0) {
        ptr->_freelist[k] = rv->_next;
    } else {
        x = 1 << k;
        rv = (struct _Bigint *)func_00190880(ptr, 1, sizeof(struct _Bigint) + (x - 1) * sizeof(unsigned int));
        if (rv == 0) return 0;
        rv->_k = k;
        rv->_maxwds = x;
    }
    rv->_sign = rv->_wds = 0;
    return rv;
}
