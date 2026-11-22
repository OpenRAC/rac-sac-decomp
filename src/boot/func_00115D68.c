/* func_00115D68 -- 24 bytes.
 *
 * A function of the boot executable at 0x00115D68; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __16__user_type_infoPCc.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__16__user_type_infoPCc.c.
 */

struct type_info {
    char *name;
    void *vptr;
};

extern void *D_001FB9D0[];

void *func_00115D68(struct type_info *self, char *name) {
    self->name = name;
    self->vptr = D_001FB9D0;
    return self;
}
