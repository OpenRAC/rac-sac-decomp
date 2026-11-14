/* func_0013C8E0 -- 64 bytes.
 *
 * A function of the boot executable at 0x0013C8E0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Calls func_13DB70(self, &local); if the result is non-zero the function
 * returns, otherwise it calls func_13DE30(local, ptr, 1). The frame uses
 * 16-byte slots.
 */

extern int func_13DB70(void *self, int *out);
extern void func_13DE30(int value, void *ptr, int flag);

void func_0013C8E0(void *self, void *ptr)
{
    int local;

    if (func_13DB70(self, &local) != 0) {
        return;
    }
    func_13DE30(local, ptr, 1);
}
