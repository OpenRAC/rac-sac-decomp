/* _sceCd_ncmd_prechk -- 344 bytes.
 *
 * A function of the boot executable at 0x00183548; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/_sceCd_ncmd_prechk.c.
 */

/* _sceCd_ncmd_prechk .. (344 bytes).
 *
 * The N-command (non-blocking) pre-check shared by the libcdvd routines: take
 * the command semaphore, remember the caller's socket, wait for the drive to
 * go idle, make sure the SIF RPC is up and the ncmd server bound, then leave
 * the semaphore held so the caller's RPC can run.
 *
 * Derived from the RAC1 decompilation (src/sdk/storage/cd_check_ncmd.c), which
 * is the same Sony libcdvd source under the same 2.9-ee compiler. RAC5 drops
 * the ReferThreadStatus bookkeeping that RAC1 keeps after the socket store,
 * and the retry spin is 0x100000 iterations, not 0x10000:
 *
 * b loop entry, jumps over the back-off
 *
 * The two identical back-off loops are the two `for` loops of the source; the
 * compiler emits them separately, which is what the retail stream shows. */

struct CdlCB {
    int pad_0[9];
    int unk24;                     /* +0x24: bound flag */
};

extern volatile int D_001CDA68;
extern int D_001CDA50;
extern int D_001CDA5C;
extern int D_001CDA7C;         /* , negative = needs bind */
extern struct CdlCB D_001CEC10;
extern char D_00204610[];
extern char D_00204638[];

extern void func_00182F50(void);
extern int func_00190DB0(int);
extern int func_00190D80(int);
extern int func_00193810(const char *, ...);
extern int func_00183738(int);
extern void func_00194270(int);
extern int func_00194A18(void *, unsigned int, int);

int _sceCd_ncmd_prechk(int arg0) {
    int spin;

    func_00182F50();
    if (D_001CDA68 != func_00190DB0(D_001CDA68)) {
        if (D_001CDA50 > 0) {
            func_00193810(D_00204610, arg0, D_001CDA5C);
        }
        return 0;
    }
    D_001CDA5C = arg0;
    if (func_00183738(1) != 0) {
        func_00190D80(D_001CDA68);
        return 0;
    }
    func_00194270(0);
    if (D_001CDA7C >= 0) {
        return 1;
    }
    for (;;) {
        if (func_00194A18(&D_001CEC10, 0x80000595, 0) < 0) {
            if (D_001CDA50 > 0) {
                func_00193810(D_00204638);
            }
            for (spin = 0x100000; spin != -1; spin--) {
            }
            continue;
        }
        if (D_001CEC10.unk24 != 0) {
            break;
        }
        for (spin = 0x100000; spin != -1; spin--) {
        }
    }
    D_001CDA7C = 0;
    return 1;
}
