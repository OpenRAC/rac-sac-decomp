/* __malloc_lock -- 96 bytes.
 *
 * A function of the boot executable at 0x00187BB0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__malloc_lock.c.
 */

/* newlib __malloc_lock (sce thread-owner lock), : a thread that already owns the lock only bumps the count. */
extern int D_001CFC48;
extern int D_001CFC4C;
extern int D_001D01E0;
extern int func_00190C50(void);
extern int func_00190DA0(int sema);
void __malloc_lock(void *reent)
{
    int tid = func_00190C50();
    if (D_001CFC48 == tid) {
        D_001CFC4C++;
        return;
    }
    func_00190DA0(D_001D01E0);
    D_001CFC48 = tid;
    D_001CFC4C++;
}
