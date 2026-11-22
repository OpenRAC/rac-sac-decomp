/* sceSifSyncIop -- 80 bytes.
 *
 * A function of the boot executable at 0x0019A390; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifSyncIop.c.
 */

/* PS2 SDK sceSifSyncIop, (80 bytes). */
extern int func_00191170(int no);
extern int func_001911E0(void);
extern int func_0019C6D8(int no, int mode);

int sceSifSyncIop(void) {
    if (func_00191170(4) & 0x40000) {
        func_001911E0();
        func_0019C6D8(1, 1);
        func_0019C6D8(0, 1);
        return 1;
    }
    return 0;
}
