/* func_001035C8 -- 8 bytes.
 *
 * A function of the boot executable at 0x001035C8; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct Boot_001035C8_Object
{
    unsigned char pad_000[0x50];
    int          field_050;
} Boot_001035C8_Object;

int func_001035C8(Boot_001035C8_Object *self)
{
    return self->field_050;
}
