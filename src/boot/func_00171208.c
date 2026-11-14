/* func_00171208 -- 60 bytes.
 *
 * A function of the boot executable at 0x00171208; its placement is
 * listed in config/boot/bodies.tsv.
 */

struct BootObj
{
    char pad[0x4C];
    int field4c;
    int field50;
};

extern int func_172718(struct BootObj *object, int a1, int a2, int a3);

int func_00171208(struct BootObj *object, int a1, int a2, int a3)
{
    int result = func_172718(object, a1, a2, a3);

    if (result == 0) {
        object->field50 = a3;
        return 0;
    }
    return result;
}
