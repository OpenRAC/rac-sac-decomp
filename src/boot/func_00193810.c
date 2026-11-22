/* scePrintf -- 128 bytes.
 *
 * A function of the boot executable at 0x00193810; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/scePrintf.c.
 */

/* scePrintf -- kernel debug printf: disables interrupts around the formatted output to the console callback. */
typedef void *va_list;
#define va_start(AP, LASTARG) \
    (AP = ((va_list) __builtin_next_arg(LASTARG) - 0x38))

extern int func_0019A4F0(void);
extern int func_0019A540(void);
extern int func_00192910(int (*put)(void), void *ctx, unsigned int limit, const char *fmt, void *args);
extern int func_00193680(void);

void scePrintf(const char *fmt, ...) {
    va_list ap;
    int ctx[2];
    int was;

    ctx[0] = 0;
    was = func_0019A4F0();
    va_start(ap, fmt);
    func_00192910(func_00193680, ctx, 0xFFFFFFFFu, fmt, ap);
    if (was != 0) func_0019A540();
}
