/* func_0014DD88 -- 60 bytes.
 *
 * A function of the boot executable at 0x0014DD88; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_14E158(int self, int *out);
void func_14E3C0(int object, float value);

void func_0014DD88(int self, float value)
{
    int out;

    if (func_14E158(self, &out) == 0)
        func_14E3C0(out, value);
}
