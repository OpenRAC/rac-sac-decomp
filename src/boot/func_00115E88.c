/* func_00115E88 -- 48 bytes.
 *
 * A function of the boot executable at 0x00115E88; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body _13bad_exception.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_$_13bad_exception.c.
 */

extern void *D_001FBAB8[];
extern void func_00115858(void *ptr);

void _$_13bad_exception(void *self, int flags) {
    *(void **)self = D_001FBAB8;
    if (flags & 1)
        func_00115858(self);
}
