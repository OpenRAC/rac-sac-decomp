/* free -- 72 bytes.
 *
 * A function of the boot executable at 0x00187828; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/free.c.
 */

/* newlib free: lock, func_0018CF90 on the impure reent, unlock. Retail . */
extern void *D_001CF8E4;
extern void func_00187BB0(void *reent);
extern void func_00187C10(void *reent);
extern void func_0018CF90(void *reent, void *p);

void free(void *p)
{
    func_00187BB0(D_001CF8E4);
    func_0018CF90(D_001CF8E4, p);
    func_00187C10(D_001CF8E4);
}
