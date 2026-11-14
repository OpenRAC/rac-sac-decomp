/* func_0013C840 -- 76 bytes.
 *
 * A function of the boot executable at 0x0013C840; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Asks func_13DB70 for an object (written through the second argument); when
 * the call fails (returns 0), the object is handed to func_13DD60 together
 * with the incoming floats.
 */

int func_13DB70(int self, int *out);
void func_13DD60(int object, float value, float value2);

void func_0013C840(int self, float value, float value2)
{
    int out;

    if (func_13DB70(self, &out) == 0)
        func_13DD60(out, value, value2);
}
