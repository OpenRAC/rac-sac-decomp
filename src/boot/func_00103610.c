/* func_00103610 -- 8 bytes.
 *
 * A function of the boot executable at 0x00103610; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Setter: stores the second argument in the word at offset 0x48 of the object
 * given as first argument.
 */

typedef struct Boot_00103610_Object
{
    unsigned char pad_000[0x48];
    int          field_048;
} Boot_00103610_Object;

void func_00103610(Boot_00103610_Object *self, int value)
{
    self->field_048 = value;
}
