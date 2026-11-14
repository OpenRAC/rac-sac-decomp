/* func_00103818 -- 8 bytes.
 *
 * A function of the boot executable at 0x00103818; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x40];
    float field_40;
} BootObj_00103818;

void func_00103818(BootObj_00103818 *self, float value)
{
    self->field_40 = value;
}
