/* func_00148DE8 -- 60 bytes.
 *
 * A function of the boot executable at 0x00148DE8; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int func_149098(int a, int *out);
extern void func_1490F0(int a, float b);

void func_00148DE8(int a, float b)
{
    int local;
    if (func_149098(a, &local))
        return;
    func_1490F0(local, b);
}
