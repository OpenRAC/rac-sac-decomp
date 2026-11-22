/* sceCdDiskReady_old -- 536 bytes.
 *
 * A function of the boot executable at 0x00183D38; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceCdDiskReady_old.c.
 */

/* boot: -- old-module DiskReady: sends the mode argument over the S-command RPC and returns the reply. Ported from OpenRAC/rac4-decomp src/core/00137998.c (func_00137998). */
typedef struct { unsigned char pad[0x24]; int x24; } Type1;

extern int func_001837D8(int);
extern void func_00194270(int);
extern int func_00194A18(void *, int, int);
extern void func_001941C0();
extern int func_00194BF8(void *, int, int, void *, int, void *, int, void *, void *);
extern void func_00193810();
extern int func_0019A4F0(void);
extern void func_0019A540(void);
extern void func_00182F50(void);
extern int func_00190DB0(int);
extern int func_00190D80(int);
extern int D_001CDA50;
extern volatile int D_001CDA6C;
extern int D_001CDA80;
extern int D_001CDA90;
extern Type1 D_0028EE50;
extern int D_0028EE90;
extern int D_001CEC40[];
extern char D_002046E0[];
extern char D_002046F8[];
extern char D_00204718[];

int sceCdDiskReady_old(int arg0) {
    int ei;
    int r;

    if (D_001CDA50 > 0) {
        func_00193810(D_002046E0);
    }
    ei = func_0019A4F0();
    D_001CDA80 = 1;
    if (ei) {
        func_0019A540();
    }
    func_00182F50();
    if (D_001CDA6C != func_00190DB0(D_001CDA6C)) {
        return 6;
    }
    if (func_001837D8(1) != 0) {
        func_00190D80(D_001CDA6C);
        return arg0 != 8 ? 6 : -1;
    }
    func_00194270(0);
    if (D_001CDA90 < 0) {
        while (1) {
            int i;
            if (func_00194A18(&D_0028EE50, 0x8000059A, 0) < 0) {
                if (D_001CDA50 > 0) {
                    func_00193810(D_002046F8);
                }
                i = 0x100000;
                while (--i != -1) {
                }
            } else if (D_0028EE50.x24 != 0) {
                D_001CDA90 = 0;
                break;
            } else {
                i = 0x100000;
                while (--i != -1) {
                }
            }
        }
    }
    D_0028EE90 = arg0;
    func_001941C0(&D_0028EE90, 4);
    if (func_00194BF8(&D_0028EE50, 0, 0, &D_0028EE90, 4, D_001CEC40, 4, 0, 0) < 0) {
        func_00190D80(D_001CDA6C);
        return arg0 != 8 ? 6 : -1;
    }
    if (D_001CDA50 > 0) {
        func_00193810(D_00204718);
    }
    r = *(int *)((unsigned int)D_001CEC40 | 0x20000000);
    func_00190D80(D_001CDA6C);
    return r;
}
