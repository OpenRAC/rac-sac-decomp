/* func_00117028 -- 56 bytes.
 *
 * A function of the boot executable at 0x00117028; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __start_cp_handler.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__start_cp_handler.c.
 */

struct cp_eh_info {
    char pad0[0x14];
    int handler_active;
    char pad1[8];
    long long handler_count;
};

extern struct cp_eh_info **func_001160A0(void);

void *func_00117028(void) {
    struct cp_eh_info *info = *func_001160A0();
    info->handler_active = 1;
    info->handler_count++;
    return info;
}
