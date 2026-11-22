/* isceSifSetDma -- 56 bytes.
 *
 * A function of the boot executable at 0x00193AD8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/isceSifSetDma.c.
 */

/* isceSifSetDma .. (56 bytes).
 * jal func_00193988
 * b
 * :
 * jal func_00191130
 * nop (delay slot)
 * :
 * Interrupt-safe DMA submit: goes through the packet builder while DMA is
 * busy, otherwise straight to the raw submission. */
extern int D_001D0118;
extern int func_00193988(int, int, int);
extern int func_00191130(int, int);

int isceSifSetDma(int addr, int size) {
    int r;

    if (D_001D0118) r = func_00193988(addr, size, 1);
    else r = func_00191130(addr, size);
    return r;
}
