/* func_0013B2C8 -- 72 bytes.
 *
 * A function of the boot executable at 0x0013B2C8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Same shape as func_0013B240: the call to func_143A10 returns an integer; the
 * caller's second argument is cleared if non-null, otherwise func_144158 is
 * called with the local value and that argument.
 */

extern int func_143A10(unsigned int packed, int *out);
extern int func_144158(int value, int *out);

void func_0013B2C8(unsigned int packed, int *a1)
{
    int local;

    if (func_143A10(packed, &local)) {
        if (a1) {
            *a1 = 0;
            return;
        }
        return;
    }
    func_144158(local, a1);
}
