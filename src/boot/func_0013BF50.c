/* func_0013BF50 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013BF50; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_143A10(int self, int *out);
void func_144A88(int object, float value);

void func_0013BF50(int self, float value)
{
    int out;

    if (func_143A10(self, &out) == 0)
        func_144A88(out, value);
}
