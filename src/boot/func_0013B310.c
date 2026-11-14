/* func_0013B310 -- 64 bytes.
 *
 * A function of the boot executable at 0x0013B310; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_143A10(int self, int *out);
void func_1411D8(int object, int flag, float value);

void func_0013B310(int self, float value)
{
    int out;

    if (func_143A10(self, &out) == 0)
        func_1411D8(out, 1, value);
}
