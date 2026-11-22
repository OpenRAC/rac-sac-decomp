/* func_00117060 -- 40 bytes.
 *
 * A function of the boot executable at 0x00117060; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __eh_alloc.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__eh_alloc.c.
 */

extern void *func_001877D8(unsigned int size);
extern void func_00116F80(void) __attribute__((noreturn));

void *func_00117060(unsigned int size) {
    void *p = func_001877D8(size);
    if (p == 0)
        func_00116F80();
    return p;
}
