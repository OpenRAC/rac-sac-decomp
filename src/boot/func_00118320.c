/* func_00118320 -- 120 bytes.
 *
 * A function of the boot executable at 0x00118320; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body __deregister_frame_info.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/__deregister_frame_info.c.
 */

/* func_00118320 -- unlinks and returns the registered frame-info record starting at the given address. */
typedef struct frame_info {
    void *buffer_owner;
    int pad4;
    void *begin;
    void *buffer;
    int pad10;
    struct frame_info *next;
} frame_info;

extern frame_info *D_00288700;
extern void func_00187828(void *p);
extern void func_00187680(void) __attribute__((noreturn));

void *func_00118320(void *begin) {
    frame_info **p;
    frame_info *ob;

    for (p = &D_00288700; *p != 0; p = &(*p)->next) {
        ob = *p;
        if (ob->begin == begin) {
            *p = ob->next;
            if (ob->buffer_owner != 0) {
                func_00187828(ob->buffer);
            }
            return ob;
        }
    }
    func_00187680();
}
