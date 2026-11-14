/* func_0013B800 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013B800; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int func_143A10(unsigned int packed, int *out);
extern int func_144468(int value, int *out);

void func_0013B800(unsigned int packed, int *a1)
{
    int local;

    if (func_143A10(packed, &local))
        return;
    func_144468(local, a1);
}
