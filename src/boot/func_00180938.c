/* sceMcGetSlotMax -- 192 bytes.
 *
 * A function of the boot executable at 0x00180938; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceMcGetSlotMax.c.
 */

/* RAC5 boot — sceMcGetSlotMax, retail .. (192 bytes).
 * Authored 2026-10-17, wave 11 lot c1 from the retail disassembly. The port is
 * written at request+4; the RPC is asynchronous (mode 0) and the slot count is
 * read from the receive buffer. */
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient;

typedef struct {
    int reserved_00;
    int port;
} MemoryCardSlotRequest;

extern MemoryCardRpcClient D_0028ACC0;
extern int D_001CD8E4[];
extern MemoryCardSlotRequest D_0028AD40;
extern int D_0028C280[];
extern int func_00190DB0(int);
extern int func_00190D80(int);
extern int func_00194BF8(void *, int, int, void *, int, void *, int, void *, void *);

int sceMcGetSlotMax(int port) {
    int rpc_result;

    if (D_0028ACC0.is_initialized == 0) {
        return -0x64;
    }
    if (func_00190DB0(D_001CD8E4[0]) < 0) {
        return -0xC8;
    }
    D_0028AD40.port = port;
    rpc_result = func_00194BF8(&D_0028ACC0, 0x15, 0, &D_0028AD40, 0x30, D_0028C280, 4, 0, 0);
    if (rpc_result != 0) {
        func_00190D80(D_001CD8E4[0]);
        return -0x5B;
    }
    func_00190D80(D_001CD8E4[0]);
    return D_0028C280[0];
}
