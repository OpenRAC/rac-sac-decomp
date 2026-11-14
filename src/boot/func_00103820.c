/* func_00103820 -- 8 bytes.
 *
 * A function of the boot executable at 0x00103820; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct {
    char pad[0x54];
    int field_54;
} BootObj_00103820;

int func_00103820(BootObj_00103820 *self)
{
    return self->field_54;
}
