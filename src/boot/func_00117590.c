/* func_00117590 -- 40 bytes.
 *
 * A function of the boot executable at 0x00117590; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body what__C9exception.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/what__C9exception.c.
 */

struct exception {
    void **vptr;
};

char *func_00117590(const struct exception *self) {
    typedef void *(*rtti_fn)(const void *);
    rtti_fn type_info_of = (rtti_fn)self->vptr[1];
    return *(char **)type_info_of(self);
}
