/* sceSifAllocIopHeap -- 112 bytes.
 *
 * A function of the boot executable at 0x00198FE8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifAllocIopHeap.c.
 */

/* RAC5 boot — sceSifAllocIopHeap, retail .. (108 bytes).
 * Authored 2026-10-17, wave 11 lot c1 from the lombyte source
 * sdk/rpc/sce_sif_alloc_iop_heap.c re-pointed at RAC5 data: heap base
 * , client , size word , result . */
typedef struct {
    unsigned char pad_0[0x24];
    void *server;
} SifClient;

extern int D_001D01BC[];
extern SifClient D_00293040;
extern int D_002930C0[];
extern int D_00293080[];
extern int func_00194BF8(SifClient *, int, int, void *, int, void *, int, void *, void *);

void *sceSifAllocIopHeap(int size) {
    if (D_001D01BC[0] < 0) {
        return 0;
    }
    D_002930C0[0] = size;
    if (func_00194BF8(&D_00293040, 1, 0, D_002930C0, 4, D_00293080, 4,
                      0, 0) < 0) {
        return 0;
    }
    return (void *)D_00293080[0];
}
