/* func_001158D0 -- 48 bytes.
 *
 * A function of the boot executable at 0x001158D0; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores the address 0x001FBA18 in field +0x4 of the object, then calls
 * func_115858 if the flag is odd.
 */

extern void func_115858(void);
extern char g_boot_001FBA18[];

struct BootObj
{
    char pad[4];
    int field4;
};

void func_001158D0(struct BootObj *object, int flags)
{
    object->field4 = (int)g_boot_001FBA18;
    if (flags & 1)
        func_115858();
}
