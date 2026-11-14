/* func_00171248 -- 180 bytes.
 *
 * A function of the boot executable at 0x00171248; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * If the object has a sub-object at +0x14, stores its field +0x148 in field
 * +0x0C of the node and sets field +0x24 to 0. If field +0x1C lacks bits 1 and
 * 2 and field +0x30 is non-zero, calls func_152170 on node+0x20. Then clears
 * the slot at table + index*4 + 0x2C4. Finally sets field +0x54 of the object
 * to 1.0 and field +0x58 to 0.5.
 */

struct __attribute__((packed)) BootNode
{
    char pad00[4];
    unsigned int flags;
    char pad08[4];
    unsigned int f0c;
    char pad10[0x14];
    unsigned int f24;
    char pad28[8];
};

struct BootSub
{
    char pad00[0x14];
    int f14;
    char pad18[0x14];
    int f2c;
    char pad30[0x10];
    int f40;
    char pad44[0xCC];
    int f110;
    char pad114[0x34];
    int f148;
};

struct BootObj
{
    char pad00[0x14];
    struct BootSub *f14;
    char pad18[0x04];
    int f1c;
    char pad20[0x04];
    int index;
    char pad28[0x08];
    int f30;
    char pad34[0x1C];
    char *table;
    float f54;
    float f58;
};

extern void func_152170(void *node, int a1, int a2, int a3);

int func_00171248(struct BootObj *object)
{
    struct BootNode *node = (struct BootNode *)((char *)object->table
                                                + 0x3C4
                                                + object->index * 0x30);
    int *slot;
    int result = 0;

    if (object->f14 != 0) {
        node->f0c = object->f14->f148;
        node->f24 = 0;
        if ((object->f1c & 6) != 0) {
            if (object->f30 != 0)
                func_152170(object->f14->f2c, (char *)node + 0x20,
                            object->f14->f40, object->f14->f14);
        }
        slot = (int *)object->table + object->index;
        *(int *)((char *)slot + 0x2C4) = 0;
    }
    object->f54 = 1.0f;
    object->f58 = 0.5f;
    return result;
}
