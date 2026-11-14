/* func_0013C740 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013C740; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_13DB70(int self, int *out);
void func_13DBF0(int object, float value);

void func_0013C740(int self, float value)
{
    int out;

    if (func_13DB70(self, &out) == 0)
        func_13DBF0(out, value);
}
