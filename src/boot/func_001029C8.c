/* func_001029C8 -- 8 bytes.
 *
 * A function of the boot executable at 0x001029C8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Clears the first byte of the object given as first argument; nothing else is
 * touched.
 */

typedef struct Boot_001029C8_Object
{
    unsigned char field_00;
} Boot_001029C8_Object;

void func_001029C8(Boot_001029C8_Object *self)
{
    self->field_00 = 0;
}
