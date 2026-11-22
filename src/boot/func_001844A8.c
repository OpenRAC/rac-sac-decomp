/* sceCdMmode -- 208 bytes.
 *
 * A function of the boot executable at 0x001844A8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceCdMmode.c.
 */

/* RAC5 boot — sceCdMmode, retail .. (208 bytes).
 * Authored 2026-10-17, wave 11 lot c1: lombyte sdk/library/scecdmmode.c
 * re-pointed at RAC5: the SCMD descriptor supplies fno , ssize
 * and rsize ; data buffer , receive ,
 * client . */
extern int func_00183848(int);
extern void func_001941C0(void *, int);
extern int func_00194BF8(void *, int, int, void *, int, void *, int, void *, void *);
extern int func_00190D80(int);
extern int D_001CDA6C;
extern int D_001CF5C0[];
extern int D_001CF080[];
extern int D_001CEC40[];
extern int D_001CF5E8[];
extern int D_001CF5EC[];
extern int D_001CF5F0[];

int sceCdMmode(int arg0) {
    unsigned char *state;
    int mode;
    int result;

    state = (unsigned char *)D_001CF080;
    mode = arg0;
    if (func_00183848(0x22) == 0) {
        return 0;
    }
    *(int *)state = mode;
    func_001941C0(state, 4);
    if (func_00194BF8(D_001CF5C0, D_001CF5E8[0], 0, state, D_001CF5EC[0],
                      D_001CEC40, D_001CF5F0[0], 0, 0) < 0) {
        func_00190D80(D_001CDA6C);
        return 0;
    }
    result = *(int *)((unsigned int)D_001CEC40 | 0x20000000);
    func_00190D80(D_001CDA6C);
    return result;
}
