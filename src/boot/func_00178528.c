/* func_00178528 -- 12 bytes.
 *
 * A function of the boot executable at 0x00178528; its placement is
 * listed in config/boot/bodies.tsv.
 */

void func_00178528(int *slot)
{
    int value;

    value = slot[1];
    slot[2] = 0;
    slot[0] = value;
}
