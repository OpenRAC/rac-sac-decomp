/* func_00171558 -- 152 bytes.
 *
 * A function of the boot executable at 0x00171558; its placement is
 * listed in config/boot/bodies.tsv.
 */

struct __attribute__((packed)) BootNode
{
    char pad00[4];
    unsigned int flags;
    char pad08[8];
    int f10;
    int f14;
    int f18;
    char pad1c[8];
    unsigned int f24;
    char pad28[8];
};

struct BootObj
{
    char pad[0x24];
    int index;
    char pad2[0x28];
    char *table;
    float f54;
    float f58;
};

int func_00171558(struct BootObj *object, float scale)
{
    struct BootNode *node = (struct BootNode *)((char *)object->table
                                                + 0x3C4
                                                + object->index * 0x30);
    int result = 0;

    scale = (scale + 1.0f) * 0.5f;
    object->f58 = scale;
    node->f10 = (int)(object->f54 * (1.0f - scale) * 16384.0f);
    node->f14 = (int)(object->f54 * object->f58 * 16384.0f);
    node->flags |= 0x4u;
    return result;
}
