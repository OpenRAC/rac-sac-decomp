/* func_00115F60 -- 64 bytes.
 *
 * A function of the boot executable at 0x00115F60; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __tf9exception.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__tf9exception.c.
 */

struct TYPE_INFO {
    const char *name;
};

extern struct TYPE_INFO D_00206118;
extern const char D_001FBA90[];
extern void func_00115988(void *addr, const char *name);

struct TYPE_INFO *func_00115F60(void) {
    struct TYPE_INFO *ti = &D_00206118;
    if (ti->name == 0)
        func_00115988(ti, D_001FBA90);
    return ti;
}
