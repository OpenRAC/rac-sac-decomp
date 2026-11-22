/* sceMcSeek -- 224 bytes.
 *
 * A function of the boot executable at 0x00180C18; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceMcSeek.c.
 */

/* RAC5 boot — sceMcSeek, retail .. (220 bytes) + 4-byte
 * alignment fill. Authored 2026-10-17, wave 11 lot c1.
 * Source: lombyte-upstream sdk/storage/memory_card/sce_mc_seek.c, adapted to
 * RAC5 data (client , sema , status , request
 * , receive ). Retail uses func_00180868 and the
 * failure path returns -0x5B. */
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient;

typedef struct {
    int file_descriptor;
    unsigned char reserved_04[0xC];
    int offset;
    int origin;
} MemoryCardSeekRequest;

extern MemoryCardRpcClient D_0028ACC0;
extern int D_001CD8E4[];
extern int D_001CD8E0;
extern MemoryCardSeekRequest D_0028AD40;
extern int D_0028C280[];
extern int func_00190DB0(int);
extern int func_00190D80(int);
extern int func_00194BF8(void *, int, int, void *, int, void *, int, void *, void *);
extern void func_00180868(void);

int sceMcSeek(int file_descriptor, int offset, int origin) {
    int rpc_result;

    if (D_0028ACC0.is_initialized == 0) {
        return -0x64;
    }
    if (func_00190DB0(D_001CD8E4[0]) < 0) {
        return -0xC8;
    }
    D_0028AD40.file_descriptor = file_descriptor;
    D_0028AD40.offset = offset;
    D_0028AD40.origin = origin;
    rpc_result = func_00194BF8(&D_0028ACC0, 4, 1, &D_0028AD40, 0x30, D_0028C280, 4,
                               (void *)func_00180868, 0);
    if (rpc_result != 0) {
        func_00190D80(D_001CD8E4[0]);
        return -0x5B;
    }
    D_001CD8E0 = 4;
    return 0;
}
