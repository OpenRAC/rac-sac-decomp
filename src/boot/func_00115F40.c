/* func_00115F40 -- 8 bytes.
 *
 * A function of the boot executable at 0x00115F40; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body name__C9type_info.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/name__C9type_info.c.
 */

char *func_00115F40(const void *self) {
    return *(char * const *)self;
}
