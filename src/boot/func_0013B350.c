/* func_0013B350 -- 72 bytes.
 *
 * A function of the boot executable at 0x0013B350; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int func_143A10(unsigned int packed, int *out);
extern int func_144188(int value, int *out);

void func_0013B350(unsigned int packed, int *a1)
{
    int local;

    if (func_143A10(packed, &local)) {
        if (a1) {
            *a1 = 0;
            return;
        }
        return;
    }
    func_144188(local, a1);
}
