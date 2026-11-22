/* sceSifSetDma -- 136 bytes.
 *
 * A function of the boot executable at 0x00193A50; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifSetDma.c.
 */

/* sceSifSetDma - submit an SIF DMA transfer, honouring the suspend flag. */

extern int D_001D0118;
extern int func_0019A4F0(void);
extern void func_0019A540(void);
extern int func_00193988();
extern int func_00191120(void *sdd, int len);

int sceSifSetDma(void *sdd, int len) {
    int intr;
    intr = func_0019A4F0();
    if (D_001D0118) {
        if (intr)
            func_0019A540();
        return func_00193988(sdd, len, 0);
    }
    if (intr)
        func_0019A540();
    return func_00191120(sdd, len);
}
