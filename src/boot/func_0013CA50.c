/* func_0013CA50 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013CA50; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Asks func_13DB70 for an object, written through the second argument. When
 * that call fails (returns 0), the object is passed to func_13E108. The float
 * argument is kept across the first call and passed on to the second.
 */

int func_13DB70(int self, int *out);
void func_13E108(int object, float value);

void func_0013CA50(int self, float value)
{
    int out;

    if (func_13DB70(self, &out) == 0)
        func_13E108(out, value);
}
