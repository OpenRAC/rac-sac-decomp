/* func_00148D68 -- 60 bytes.
 *
 * A function of the boot executable at 0x00148D68; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * If func_149098(self, &local) fails (returns non-zero), returns. Otherwise
 * calls func_1490C8(local, arg2). func_149098 stores self in *local and
 * returns 0.
 */

extern int func_149098(int a, int *out);
extern void func_1490C8(int a, void *b);

void func_00148D68(int a, void *b)
{
    int local;
    if (func_149098(a, &local))
        return;
    func_1490C8(local, b);
}
