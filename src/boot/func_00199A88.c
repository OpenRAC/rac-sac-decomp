/* sceSifUnloadModule -- 144 bytes.
 *
 * A function of the boot executable at 0x00199A88; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifUnloadModule.c.
 */

/* sceSifUnloadModule -- asks the IOP to unload a module by id through the module-load RPC client; returns the IOP result or a client error code. */
extern int func_001994B0(void);
extern int func_001995B0(void);
extern int func_00194BF8(void *client, int fno, int mode, void *send, int ssize, void *recv, int rsize, void *end_func, void *end_data);
extern int D_00293200[];
extern char D_00293400[];

int sceSifUnloadModule(int id) {
    int *buf;

    if (func_001994B0() < 0) return 0xFFFF0000;
    if (func_001995B0() != 0) return 0xFFFEFFFC;
    buf = D_00293200;
    D_00293200[0] = id;
    if (func_00194BF8(D_00293400, 8, 0, buf, 4, buf, 4, 0, 0) < 0) return 0xFFFEFFFF;
    return D_00293200[0];
}
