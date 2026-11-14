/* func_00168CE8 -- 12 bytes.
 *
 * A function of the boot executable at 0x00168CE8; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x18C];
    int f;
} Obj_00168CE8;

int func_00168CE8(Obj_00168CE8 *self, int v)
{
    self->f = v;
    return 0;
}
