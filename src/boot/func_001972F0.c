/* sceMkdir -- 440 bytes.
 *
 * A function of the boot executable at 0x001972F0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceMkdir.c.
 */

/* sceMkdir .. (440 bytes).
 * libfileio mkdir: copy the path into the shared FsCall block, issue RPC 7 and
 * return the server's answer. */
struct FsCallMk {
    int sema;            /* +0x00 */
    void *result;        /* +0x04 */
    int result_size;     /* +0x08 */
    int arg;             /* +0x0C */
    char path[0x400];    /* +0x10 */
};

struct SemaParam {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    unsigned attr;
    unsigned option;
};

extern struct FsCallMk D_00291840;
extern int D_001D01A4;
extern int D_00292F40[];
extern int D_00292480[];
extern char D_002059A0[];

extern void func_00195A10(int);
extern void func_00195B38(void);
extern int func_00190D60(struct SemaParam *);
extern int func_00190D70(int);
extern int func_00190DA0(int);
extern int func_00195A40(void);
extern int func_001954A0(void *, int, int, void *, int, void *, int, void *, void *,
                       void *);

int sceMkdir(char *path, int mode) {
    struct FsCallMk *call = &D_00291840;
    struct SemaParam sp;
    int sema;
    int result;
    int status;
    int i;

    func_00195A10(7);
    if (D_001D01A4 == 0) func_00195B38();
    i = 0;
    while (i < 0x400) {
        if ((*(((char *)call + i) + 0x10) = path[i]) == 0) break;
        i++;
    }
    if (i == 0x400) {
        *((char *)call + 0x40F) = 0;
        i = 0x3FF;
    }
    call->arg = mode;
    sp.max_count = 1;
    sp.option = (unsigned)D_002059A0;
    sp.init_count = 0;
    sema = func_00190D60(&sp);
    call->result = &result;
    call->sema = sema;
    call->result_size = 4;
    if (func_001954A0(D_00292F40, 7, 0, &D_00291840, i + 0x11, D_00292480, 4, 0, 0,
                    0) < 0) {
        func_00190D70(sema);
        func_00195A40();
        return -11;
    }
    status = *(int *)((unsigned)D_00292480 | 0x20000000);
    func_00195A40();
    if (status == 0) {
        func_00190D70(sema);
        return -11;
    }
    func_00190DA0(sema);
    func_00190D70(sema);
    return result;
}
