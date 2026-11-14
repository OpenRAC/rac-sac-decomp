/* func_0013C7C0 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013C7C0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Asks func_13DB70 for an object (written through the second argument); when
 * the call fails (returns 0), the object is handed to func_13DC58 together
 * with the incoming float.
 */

int func_13DB70(int self, int *out);
void func_13DC58(int object, float value);

void func_0013C7C0(int self, float value)
{
    int out;

    if (func_13DB70(self, &out) == 0)
        func_13DC58(out, value);
}
