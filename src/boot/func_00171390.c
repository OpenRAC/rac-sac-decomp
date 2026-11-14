/* func_00171390 -- 84 bytes.
 *
 * A function of the boot executable at 0x00171390; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Stores -1 in the slot at table + index*4 + 0x2C4, sets the node flags (table
 * + index*0x30 + 0x3C4 + 4) to 2 and then sets bit 31 of them. Returns 0.
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
    char pad[0x24];
    int index;
    char pad2[0x28];
    char *table;
};

int func_00171390(struct BootObj *object)
{
    struct BootNode *node = (struct BootNode *)((char *)object->table
                                                + 0x3C4
                                                + object->index * 0x30);
    int *slot = (int *)object->table + object->index;
    int result = 0;

    *(int *)((char *)slot + 0x2C4) = -1;
    node->flags = 2;
    node->flags |= 0x80000000u;
    return result;
}
