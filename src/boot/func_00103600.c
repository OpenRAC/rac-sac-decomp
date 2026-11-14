/* func_00103600 -- 8 bytes.
 *
 * A function of the boot executable at 0x00103600; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Setter: stores the second argument in the word at offset 0x5C of the object
 * given as first argument.
 */

typedef struct Boot_00103600_Object
{
    unsigned char pad_000[0x5C];
    int          field_05C;
} Boot_00103600_Object;

void func_00103600(Boot_00103600_Object *self, int value)
{
    self->field_05C = value;
}
