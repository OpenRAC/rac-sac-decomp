/* func_00116FA8 -- 16 bytes.
 *
 * A function of the boot executable at 0x00116FA8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body set_terminate__FPFv_v.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/set_terminate__FPFv_v.c.
 */

extern void (*D_001B1E90)(void);

void (*func_00116FA8(void (*handler)(void)))(void) {
    void (*old)(void) = D_001B1E90;
    D_001B1E90 = handler;
    return old;
}
