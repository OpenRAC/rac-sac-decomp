/* func_001624D0 -- 12 bytes.
 *
 * A function of the boot executable at 0x001624D0; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x88];
    int f;
} Obj_001624D0;

int func_001624D0(Obj_001624D0 *self, int v)
{
    self->f = v;
    return 0;
}
