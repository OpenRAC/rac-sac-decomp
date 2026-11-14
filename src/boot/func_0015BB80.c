/* func_0015BB80 -- 128 bytes.
 *
 * A function of the boot executable at 0x0015BB80; its placement is
 * listed in config/boot/bodies.tsv.
 */

typedef struct Boot_0015BB80_Item
{
    int          field_000;
    unsigned char pad_004[0x10];
    unsigned int field_014;
    unsigned char pad_018[0x04];
    int          field_01C;
    unsigned char pad_020[0x1C];
    int          field_03C;
} Boot_0015BB80_Item;

void func_184704(void *item, void *target, int value);

int func_0015BB80(void *self, Boot_0015BB80_Item *item)
{
    int saved_000;
    int saved_01C;
    int saved_03C;

    if (item == 0)
        return 37;
    if (item->field_014 >= 3)
        return 37;
    saved_000 = item->field_000;
    saved_01C = item->field_01C;
    saved_03C = item->field_03C;
    func_184704(item, (void *)((char *)self + 0x81C), saved_000);
    item->field_000 = saved_000;
    item->field_01C = saved_01C;
    item->field_03C = saved_03C;
    return 0;
}
