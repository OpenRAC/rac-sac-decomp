/* __malloc_unlock -- 64 bytes.
 *
 * A function of the boot executable at 0x00187C10; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__malloc_unlock.c.
 */

/* newlib __malloc_unlock, (64 bytes):
 * if (--lock_count == 0) { func_00190D80(sema); owner = -1; }
 */
extern int D_001CFC4C;
extern int D_001CFC48;
extern int D_001D01E0;

extern int func_00190D80(int sema);

int __malloc_unlock(void) {
    if (--D_001CFC4C == 0) {
        D_001CFC48 = -1;
        func_00190D80(D_001D01E0);
    }
}
