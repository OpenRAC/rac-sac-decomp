/* sceMcOpen -- 296 bytes.
 *
 * A function of the boot executable at 0x001809F8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceMcOpen.c.
 */

typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient;

typedef struct {
    int port;
    int slot;
    int flags;
    int maxent;
    int unk10;
    char name[0x400];
} MemoryCardNameParam;

extern MemoryCardRpcClient D_0028ACC0;
extern int D_001CD8E4[];
extern int D_001CD8E0;
extern unsigned char D_0028AD84[];
extern int D_0028C280[];
extern int func_00190DB0(int);
extern int func_00190D80(int);
extern int func_00194BF8(void *, int, int, void *, int, void *, int, void *, void *);
extern char *func_00185360(char *, const char *, unsigned int);
extern void func_00180868(void);

int sceMcOpen(int port, int slot, char *name, int mode) {
    MemoryCardNameParam *request;
    int rpc_result;

    if (D_0028ACC0.is_initialized == 0) {
        return -0x64;
    }
    if (func_00190DB0(D_001CD8E4[0]) < 0) {
        return -0xC8;
    }
    if (name == 0 || name[0] == 0) {
        func_00190D80(D_001CD8E4[0]);
        return -0xD2;
    }
    func_00185360((char *)D_0028AD84, name, 0x3FF);
    request = (MemoryCardNameParam *)(D_0028AD84 - 0x14);
    request->port = port;
    request->flags = mode;
    request->slot = slot;
    request->name[0x3FF] = 0;
    rpc_result = func_00194BF8(&D_0028ACC0, 2, 1, request, 0x414, D_0028C280, 4,
                               (void *)func_00180868, 0);
    if (rpc_result != 0) {
        func_00190D80(D_001CD8E4[0]);
        return -0x5B;
    }
    D_001CD8E0 = 2;
    return 0;
}
