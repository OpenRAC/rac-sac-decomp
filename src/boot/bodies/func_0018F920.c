/* func_0018F920 -- SCUS_976.23 0x0018F920, 52 bytes.
 *
 * Body translated from the boot executable.
 *
 * Evidence:
 *   Bfree — newlib libc/stdlib/mprec.c
 *
 * Placement: virtual address in the boot executable; the other
 * placements of the same body are listed in config/boot/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
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
Bfree(ptr, v)
    struct _reent *ptr;
    struct _Bigint *v;
{
    if (v) {
        v->_next = ptr->_freelist[v->_k];
        ptr->_freelist[v->_k] = v;
    }
}
