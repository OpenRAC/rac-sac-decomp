/* func_0013B200 -- 64 bytes.
 *
 * A function of the boot executable at 0x0013B200; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_143A10(int self, int *out);
void func_140FC0(int object, int flag, float value);

void func_0013B200(int self, float value)
{
    int out;

    if (func_143A10(self, &out) == 0)
        func_140FC0(out, 0, value);
}
