/* func_00171720 -- 40 bytes.
 *
 * A function of the boot executable at 0x00171720; its placement is
 * listed in config/boot/bodies.tsv.
 */

struct BootObj
{
    char pad[0x24];
    int index;
    char pad2[0x28];
    int *field50;
};

int func_00171720(struct BootObj *object, int *out)
{
    int result = 0;
    int *slot = object->field50 + object->index + 0xB1;

    *out = (*slot >= 0);
    return result;
}
