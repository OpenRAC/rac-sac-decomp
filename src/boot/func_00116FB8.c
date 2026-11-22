/* func_00116FB8 -- 16 bytes.
 *
 * A function of the boot executable at 0x00116FB8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body set_terminate__FPFv_v.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/set_terminate__FPFv_v.c.
 */

extern void (*D_001B2488)(void);

void (*func_00116FB8(void (*handler)(void)))(void) {
    void (*old)(void) = D_001B2488;
    D_001B2488 = handler;
    return old;
}
