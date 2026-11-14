/* func_0013ADB0 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013ADB0; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_15B460(int self, int *out);
void func_15C720(int object, float value);

void func_0013ADB0(int self, float value)
{
    int out;

    if (func_15B460(self, &out) == 0)
        func_15C720(out, value);
}
