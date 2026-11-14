/* func_00115988 -- 28 bytes.
 *
 * A function of the boot executable at 0x00115988; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern char g_boot_001FB9D0[];

struct BootObj
{
    int field00;
    int field04;
};

void func_00115988(struct BootObj *object, int a1)
{
    if (object) {
        object->field00 = a1;
        object->field04 = (int)g_boot_001FB9D0;
    }
}
