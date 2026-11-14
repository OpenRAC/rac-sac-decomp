/* func_0014B500 -- 12 bytes.
 *
 * A function of the boot executable at 0x0014B500; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x228];
    float f;
} Obj_0014B500;

int func_0014B500(Obj_0014B500 *self, float v)
{
    self->f = v;
    return 0;
}
