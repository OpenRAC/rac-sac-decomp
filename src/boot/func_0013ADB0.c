/* func_0013ADB0 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013ADB0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Asks func_15B460 for an object (written through the second argument); when
 * the call fails (returns 0), the object is handed to func_15C720 together
 * with the incoming float.
 */

int func_15B460(int self, int *out);
void func_15C720(int object, float value);

void func_0013ADB0(int self, float value)
{
    int out;

    if (func_15B460(self, &out) == 0)
        func_15C720(out, value);
}
