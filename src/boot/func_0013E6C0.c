/* func_0013E6C0 -- 12 bytes.
 *
 * A function of the boot executable at 0x0013E6C0; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x14];
    int f;
} Obj_0013E6C0;

int func_0013E6C0(Obj_0013E6C0 *self, int v)
{
    self->f = v;
    return 0;
}
