/* func_0013B310 -- 64 bytes.
 *
 * A function of the boot executable at 0x0013B310; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Asks func_143A10 for an object (written through the second argument); when
 * the call fails (returns 0), the object is handed to func_1411D8 with the
 * incoming float and the flag 1. Same shape as func_0013B200, but the second
 * call receives 1 instead of 0.
 */

int func_143A10(int self, int *out);
void func_1411D8(int object, int flag, float value);

void func_0013B310(int self, float value)
{
    int out;

    if (func_143A10(self, &out) == 0)
        func_1411D8(out, 1, value);
}
