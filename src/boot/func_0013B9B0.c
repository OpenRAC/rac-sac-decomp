/* func_0013B9B0 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013B9B0; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_143A10(int self, int *out);
void func_1444B8(int object, float value);

void func_0013B9B0(int self, float value)
{
    int out;

    if (func_143A10(self, &out) == 0)
        func_1444B8(out, value);
}
