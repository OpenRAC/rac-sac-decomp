/* func_0015FF90 -- 8 bytes.
 *
 * A function of the boot executable at 0x0015FF90; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x1B0];
    int field_1B0;
} Obj_0015FF90;

int func_0015FF90(Obj_0015FF90 *self)
{
    return self->field_1B0;
}
