/* malloc -- 80 bytes.
 *
 * A function of the boot executable at 0x001877D8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/malloc.c.
 */

/* newlib malloc: lock, func_0018C860 on the impure reent, unlock. Retail . */
extern void *D_001CF8E4;
extern void func_00187BB0(void *reent);
extern void func_00187C10(void *reent);
extern void *func_0018C860(void *reent, unsigned int n);

void *malloc(unsigned int n)
{
    void *r;
    func_00187BB0(D_001CF8E4);
    r = func_0018C860(D_001CF8E4, n);
    func_00187C10(D_001CF8E4);
    return r;
}
