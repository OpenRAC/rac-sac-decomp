/* __tf13bad_exception -- 80 bytes.
 *
 * A function of the boot executable at 0x00119258; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__tf13bad_exception.c.
 */

/* __tf13bad_exception — GCC 2.9 RTTI accessor: lazily builds its si_type_info through
 func_00115968 after the base-class accessor, then returns it.
 Exact under route Q (Sony sdk991111 -O2 -G0 + pinned GNU as): 80/80.
 The pinned GNU chain keeps an 8-byte callee-save stride (76/80), so this
 body carries the sdk991111 selector in config/cflags.txt. */
struct si_type_info {
    char *name;
    void *vptr;
    const void *base;
};

extern struct si_type_info D_00297A80;
extern struct si_type_info D_00206118;
extern char D_001FBCF8[];

extern void func_00115F60(void);
extern void func_00115968(struct si_type_info *self, char *name, const void *base);

struct si_type_info *__tf13bad_exception(void) {
    if (D_00297A80.name == 0) {
        func_00115F60();
        func_00115968(&D_00297A80, D_001FBCF8, &D_00206118);
    }
    return &D_00297A80;
}
