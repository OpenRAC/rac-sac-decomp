/* func_0013B288 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013B288; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Asks func_143A10 for an object (written through the second argument); when
 * the call fails (returns 0), the object is handed to func_144028 together
 * with the incoming float.
 */

int func_143A10(int self, int *out);
void func_144028(int object, float value);

void func_0013B288(int self, float value)
{
    int out;

    if (func_143A10(self, &out) == 0)
        func_144028(out, value);
}
