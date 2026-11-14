/* func_00172A00 -- 12 bytes.
 *
 * A function of the boot executable at 0x00172A00; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x30];
    int f;
} Obj_00172A00;

int func_00172A00(Obj_00172A00 *self, int v)
{
    self->f = v;
    return 0;
}
