/* func_00116158 -- 40 bytes.
 *
 * A function of the boot executable at 0x00116158; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __get_dynamic_handler_chain.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__get_dynamic_handler_chain.c.
 */

extern void *(*D_001B1E94)(void);

void *func_00116158(void) {
    return (char *)D_001B1E94() + 4;
}
