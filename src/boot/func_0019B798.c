/* func_0019B798 -- 72 bytes.
 *
 * A function of the boot executable at 0x0019B798; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body AllocTimerCounter.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/AllocTimerCounter.c.
 */

/* func_0019B798 -- interrupt-safe wrapper around the interrupt-context timer allocator. */
extern int func_0019A4F0(void);
extern int func_0019A540(void);
extern int func_0019B728(void);

int func_0019B798(void) {
    int was;
    int r;

    was = func_0019A4F0();
    r = func_0019B728();
    if (was != 0) func_0019A540();
    return r;
}
