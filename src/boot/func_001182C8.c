/* func_001182C8 -- 40 bytes.
 *
 * A function of the boot executable at 0x001182C8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __register_frame_info_table.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__register_frame_info_table.c.
 */

struct object {
    void *pc_begin;
    void *pc_end;
    void *fde_begin;
    void *fde_array;
    unsigned int count;
    struct object *next;
};

extern struct object *D_00288700;

void func_001182C8(void *begin, struct object *ob) {
    ob->fde_array = begin;
    ob->next = D_00288700;
    D_00288700 = ob;
    ob->fde_begin = begin;
    ob->pc_begin = 0;
    ob->count = 0;
    ob->pc_end = 0;
}
