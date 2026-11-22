/* sceCdSync -- 160 bytes.
 *
 * A function of the boot executable at 0x00183738; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceCdSync.c.
 */

/* sceCdSync — RAC2 src/core/00124AF0.c func_00124C28, adapted to the RAC5
 retail shape (RAC5 branch ): the wait calls func_00191DD8(0xFA0)
 and func_00194DF8. RAC5 data: (cb_thid),
 (pending flag), (client). Format string at . */

extern int D_001CDA50;
extern int D_001CDA74;
extern int D_001CEC10[];
extern char D_00204650[];

extern int func_00193810(char *, ...);
extern int func_00191DD8(int);
extern int func_00194DF8(void *);

int sceCdSync(int arg0) {
    if (arg0 == 0) {
        if (D_001CDA50 > 0) {
            func_00193810(D_00204650);
        }
        while (D_001CDA74 != 0 || func_00194DF8(D_001CEC10) != 0) {
            func_00191DD8(0xFA0);
        }
        return 0;
    }
    if (D_001CDA74 != 0 || func_00194DF8(D_001CEC10) != 0) {
        return 1;
    }
    return 0;
}
