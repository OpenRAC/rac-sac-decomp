/* func_001711D0 -- 52 bytes.
 *
 * A function of the boot executable at 0x001711D0; its placement is
 * listed in config/boot/bodies.tsv.
 */

extern char g_boot_00202C80[];

struct BootObj
{
    char pad[0x4C];
    int field4c;
};

extern void func_174150(struct BootObj *object);

int func_001711D0(struct BootObj *object)
{
    int result;

    func_174150(object);
    object->field4c = (int)g_boot_00202C80;
    result = (int)object;
    return result;
}
