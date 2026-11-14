/* func_0013C960 -- 64 bytes.
 *
 * A function of the boot executable at 0x0013C960; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern int func_13DB70(void *self, int *out);
extern void func_13DF08(int value, void *ptr, int flag);

void func_0013C960(void *self, void *ptr)
{
    int local;

    if (func_13DB70(self, &local) != 0) {
        return;
    }
    func_13DF08(local, ptr, 1);
}
