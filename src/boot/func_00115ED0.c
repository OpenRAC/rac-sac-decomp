/* func_00115ED0 -- 80 bytes.
 *
 * A function of the boot executable at 0x00115ED0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __tf13bad_exception.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__tf13bad_exception.c.
 */

/* func_00115ED0 — GCC 2.9 RTTI accessor: lazily builds its si_type_info through
 func_00115968 after the base-class accessor, then returns it.
 Exact under route Q (Sony sdk991111 -O2 -G0 + pinned GNU as): 80/80.
 The pinned GNU chain keeps an 8-byte callee-save stride (76/80), so this
 body carries the sdk991111 selector in config/cflags.txt. */
struct si_type_info {
    char *name;
    void *vptr;
    const void *base;
};

extern struct si_type_info D_00297A40;
extern struct si_type_info D_00206120;
extern char D_001FBA80[];

extern void func_00117698(void);
extern void func_00115968(struct si_type_info *self, char *name, const void *base);

struct si_type_info *func_00115ED0(void) {
    if (D_00297A40.name == 0) {
        func_00117698();
        func_00115968(&D_00297A40, D_001FBA80, &D_00206120);
    }
    return &D_00297A40;
}
