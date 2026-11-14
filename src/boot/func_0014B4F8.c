/* func_0014B4F8 -- 8 bytes.
 *
 * A function of the boot executable at 0x0014B4F8; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x230];
    int field_230;
} Obj_0014B4F8;

int func_0014B4F8(Obj_0014B4F8 *self)
{
    return self->field_230;
}
