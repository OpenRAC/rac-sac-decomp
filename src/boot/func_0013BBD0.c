/* func_0013BBD0 -- 76 bytes.
 *
 * A function of the boot executable at 0x0013BBD0; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_143A10(int self, int *out);
void func_141E00(int object, float value, float value2);

void func_0013BBD0(int self, float value, float value2)
{
    int out;

    if (func_143A10(self, &out) == 0)
        func_141E00(out, value, value2);
}
