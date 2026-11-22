/* func_00117270 -- 48 bytes.
 *
 * A function of the boot executable at 0x00117270; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __uncatch_exception.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__uncatch_exception.c.
 */

struct cp_eh_info {
    char pad0[0x14];
    int handler_active;
};

extern struct cp_eh_info **func_001160A0(void);
extern void func_00116F80(void) __attribute__((noreturn));

void func_00117270(void) {
    struct cp_eh_info *info = *func_001160A0();
    if (info == 0)
        func_00116F80();
    info->handler_active = 0;
}
