/* func_0013BFD8 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013BFD8; its placement is
 * listed in config/boot/bodies.tsv.
 */

int func_143A10(int self, int *out);
void func_144B30(int object, float value);

void func_0013BFD8(int self, float value)
{
    int out;

    if (func_143A10(self, &out) == 0)
        func_144B30(out, value);
}
