/* sceSifRebootIop -- 272 bytes.
 *
 * A function of the boot executable at 0x0019A3E0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/sceSifRebootIop.c.
 */

/* sceSifRebootIop .. (272 bytes).
 *
 * Retail (SCUS_976.15) disassembly b03/disasm/sceSifRebootIop.txt:
 * length check (len + 11 > 80 -> func_00193810(fmt, img); return 0),
 * func_00194270(0), func_00194410, prefix+image concat into param[80],
 * then func_0019A210(param, 0).
 * Source: lombyte-upstream src/sdk/rpc/sce_sif_reboot_iop.c, adapted to the
 * RAC5 revision (func_00194410 instead of InitializeRpcCommand; data
 * addresses /).
 * Date: 2026-10-17 (w11/b03).
 */
extern char D_00205B00[];
extern char D_00205B10[];
extern int func_00193810(const char *, ...);
extern void func_00194270(unsigned int);
extern void func_00194410(void);
extern int func_0019A210(const char *, int);

int sceSifRebootIop(const char *img) {
    const char *prefix = D_00205B00;
    char param[80];
    const char *p;
    char *d;

    p = img;
    while (*p) {
        p++;
    }
    if ((unsigned int)(p + 11 - img) > 80) {
        func_00193810(D_00205B10, img);
        return 0;
    }
    func_00194270(0);
    func_00194410();
    d = param;
    while (*prefix) {
        *d++ = *prefix++;
    }
    while (*img) {
        *d++ = *img++;
    }
    *d = 0;
    return func_0019A210(param, 0);
}
