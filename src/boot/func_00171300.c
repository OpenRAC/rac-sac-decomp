/* func_00171300 -- 144 bytes.
 *
 * A function of the boot executable at 0x00171300; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * The node is at table + index*0x30 + 0x3C4. Its 32-bit fields are accessed
 * unaligned: the node is a packed struct, so its members have alignment 1.
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

struct BootObj
{
    char pad[0x1C];
    int f1c;
    char pad2[0x04];
    int index;
    char pad3[0x08];
    int f30;
    char pad4[0x1C];
    char *table;
};

int func_00171300(struct BootObj *object)
{
    struct BootNode *node = (struct BootNode *)((char *)object->table
                                                + 0x3C4
                                                + object->index * 0x30);
    int result = 0;

    node->flags &= ~2u;
    node->flags |= 1u;
    node->flags |= 0x80000000u;
    if ((object->f1c & 6) && object->f30)
        node->f24 = 1;
    return result;
}
