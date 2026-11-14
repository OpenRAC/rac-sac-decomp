/* func_00103608 -- 8 bytes.
 *
 * A function of the boot executable at 0x00103608; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct Boot_00103608_Object
{
    unsigned char pad_000[0x60];
    int          field_060;
} Boot_00103608_Object;

void func_00103608(Boot_00103608_Object *self, int value)
{
    self->field_060 = value;
}
