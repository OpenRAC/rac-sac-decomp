/* func_0011d808 -- 12 bytes.
 *
 * A function of the boot executable at 0x0011D808; its placement is
 * listed in config/boot/bodies.tsv.
 */

void func_0011D808(int *self, int value)
{
    if (self) {
        self[0x2E] = value;
    }
}
