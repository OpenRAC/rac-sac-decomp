/* func_0013B240 -- 72 bytes.
 *
 * A function of the boot executable at 0x0013B240; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int func_143A10(unsigned int packed, int *out);
extern int func_143FF8(int value, int *out);

void func_0013B240(unsigned int packed, int *a1)
{
    int local;

    if (func_143A10(packed, &local)) {
        if (a1) {
            *a1 = 0;
            return;
        }
        return;
    }
    func_143FF8(local, a1);
}
