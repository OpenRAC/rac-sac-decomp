/* func_001711A0 -- 48 bytes.
 *
 * A function of the boot executable at 0x001711A0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores the pointer 0x00202E70 in field +0x4C of the object, then calls
 * func_115858 if the flag is odd. The stored value is an address (a symbolic
 * address), not a plain constant.
 */

extern void func_115858(void);
extern char g_boot_00202E70[];

struct BootObj
{
    char pad[0x4C];
    int field4c;
};

void func_001711A0(struct BootObj *object, int flags)
{
    object->field4c = (int)g_boot_00202E70;
    if (flags & 1)
        func_115858();
}
