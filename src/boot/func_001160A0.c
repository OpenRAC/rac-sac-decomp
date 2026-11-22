/* func_001160A0 -- 40 bytes.
 *
 * A function of the boot executable at 0x001160A0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __get_eh_info.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__get_eh_info.c.
 */

extern void *(*D_001B1E94)(void);

char *func_001160A0(void) {
    return (char *)D_001B1E94() + 8;
}
