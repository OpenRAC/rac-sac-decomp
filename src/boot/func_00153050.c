/* func_00153050 -- 12 bytes.
 *
 * A function of the boot executable at 0x00153050; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0xEC];
    int f;
} Obj_00153050;

int func_00153050(Obj_00153050 *self, int v)
{
    self->f = v;
    return 0;
}
