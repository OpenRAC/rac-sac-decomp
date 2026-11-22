/* sceCdDiskReady -- 544 bytes.
 *
 * A function of the boot executable at 0x00183F50; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceCdDiskReady.c.
 */

/* -- libcdvd: waits for the drive to become ready over the S-command RPC (binds the server, retries, sends the mode and returns the reply), falling back to the old-module path when the semaphore is not available. Ported from OpenRAC/rac4-decomp src/core/00137BB0.c (func_00137BB0; itself adapted from rac3-decomp func_0012B800). */
typedef signed int s32;
typedef unsigned int u32;
typedef unsigned char u8;

typedef struct {
    u8 pad0[0x24];
    int f24;
    u8 pad28[0x40 - 0x28];
} Type1;
extern int D_001CDA50;
extern volatile int D_001CDA70;
extern int D_001CDA90;
extern int D_001CDA80;
extern char D_002046F8[];
extern char D_00204718[];
extern char D_00204730[];
extern Type1 D_0028EE50;
extern int D_0028EE90;
extern int D_001CF4C0[];
extern int func_00193810();
extern int func_00182F50();
extern int func_00190DB0();
extern int func_00190D80();
extern int func_00194270();
extern void func_001941C0();
extern int func_0019A4F0();
extern int func_0019A540();
extern s32 func_00194A18(void *, s32, s32);
extern s32 func_00194BF8();
extern int func_00183D38();

int sceCdDiskReady(int arg0)
{
    int i;
    int j;
    int r;
    int k;

    if (D_001CDA50 > 0) {
        func_00193810(D_00204730);
    }
    func_00182F50();
    if (D_001CDA70 != func_00190DB0(D_001CDA70)) {
        return arg0 != 8 ? 6 : -1;
    }
    func_00194270(0);
    i = 0;
    if (D_001CDA90 < 0) {
        for (;;) {
    L1:
        if (func_00194A18(&D_0028EE50, 0x8000059C, 0) < 0) {
            if (D_001CDA50 > 0) {
                func_00193810(D_002046F8);
            }
            j = 0x100000;
            while (j--) {
            }
            goto L1;
        }
        if (D_0028EE50.f24 != 0) {
            D_001CDA90 = 0;
            break;
        }
        if (i > 16) {
            func_00190D80(D_001CDA70);
            return func_00183D38(arg0);
        }
        k = i + 1;
        j = 0x100000;
        while (j--) {
        }
        i = k;
        }
    }
    r = func_0019A4F0();
    D_001CDA80 = 0;
    if (r) {
        func_0019A540();
    }
    D_0028EE90 = arg0;
    func_001941C0(&D_0028EE90, 4);
    if (func_00194BF8(&D_0028EE50, 0, 0, &D_0028EE90, 4, D_001CF4C0, 4, 0, 0) < 0) {
        func_00190D80(D_001CDA70);
        return arg0 != 8 ? 6 : -1;
    }
    if (D_001CDA50 > 0) {
        func_00193810(D_00204718);
    }
    r = *(int *)((u32)D_001CF4C0 | 0x20000000);
    func_00190D80(D_001CDA70);
    return r;
}
