/* func_0018F920 -- 52 bytes.
 *
 * A function of the boot executable at 0x0018F920; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * It follows the form of newlib's libc/stdlib/mprec.c; see
 * THIRD_PARTY_NOTICES.md.
 *
 * Bfree, from newlib libc/stdlib/mprec.c.
 */

struct _Bigint {
    struct _Bigint *_next;
    int _k, _maxwds, _sign, _wds;
    unsigned _x[1];
};

struct _reent {
    char _pad[0x4C];
    struct _Bigint **_freelist;
};

void
func_0018F920(ptr, v)
    struct _reent *ptr;
    struct _Bigint *v;
{
    if (v) {
        v->_next = ptr->_freelist[v->_k];
        ptr->_freelist[v->_k] = v;
    }
}
