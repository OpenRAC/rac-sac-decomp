/* func_00115CD8 -- 28 bytes.
 *
 * A function of the boot executable at 0x00115CD8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Initializes the object (field +4 = address 0x001FB9B8) and returns it.
 */

extern char g_boot_001FB9B8[];

struct BootObj
{
    int field00;
    int field04;
    int field08;
};

struct BootObj *func_00115CD8(struct BootObj *object, int a1, int a2)
{
    object->field00 = a1;
    object->field04 = (int)g_boot_001FB9B8;
    object->field08 = a2;
    return object;
}
