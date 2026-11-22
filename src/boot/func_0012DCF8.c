/* func_0012DCF8 -- 40 bytes.
 *
 * A function of the boot executable at 0x0012DCF8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body FastIDCT8x8.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/FastIDCT8x8.c.
 */

/* RAD func_0012DCF8, (40 bytes):
 * a3 becomes the table address + (a3 << 8), then tail-calls func_0012D088.
 */
extern int func_0012D088(int a, int b, int c, void *table);
extern char D_001FF440[];

int func_0012DCF8(int a, int b, int c, int d) {
    return func_0012D088(a, b, c, D_001FF440 + (d << 8));
}
