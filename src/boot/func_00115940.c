/* func_00115940 -- 36 bytes.
 *
 * A function of the boot executable at 0x00115940; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern char g_boot_001FB9A0[];

struct BootObj
{
    int field00;
    int field04;
    int field08;
    int field0c;
};

void func_00115940(struct BootObj *object, int a1, int a2, int a3)
{
    if (object) {
        object->field00 = a1;
        object->field04 = (int)g_boot_001FB9A0;
        object->field08 = a2;
        object->field0c = a3;
    }
}
