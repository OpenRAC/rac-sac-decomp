/* func_0014B518 -- 8 bytes.
 *
 * A function of the boot executable at 0x0014B518; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x238];
    int field_238;
} Obj_0014B518;

int func_0014B518(Obj_0014B518 *self)
{
    return self->field_238;
}
