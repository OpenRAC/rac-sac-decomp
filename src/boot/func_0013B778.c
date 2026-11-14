/* func_0013B778 -- 60 bytes.
 *
 * A function of the boot executable at 0x0013B778; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int func_143A10(unsigned int packed, int *out);
extern int func_141B40(int value, int *out);

void func_0013B778(unsigned int packed, int *a1)
{
    int local;

    if (func_143A10(packed, &local))
        return;
    func_141B40(local, a1);
}
