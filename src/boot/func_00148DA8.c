/* func_00148DA8 -- 60 bytes.
 *
 * A function of the boot executable at 0x00148DA8; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int func_149098(int a, int *out);
extern void func_1490D0(int a, void *b);

void func_00148DA8(int a, void *b)
{
    int local;
    if (func_149098(a, &local))
        return;
    func_1490D0(local, b);
}
