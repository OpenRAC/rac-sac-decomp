/* func_00171748 -- 168 bytes.
 *
 * A function of the boot executable at 0x00171748; its placement is
 * listed in config/boot/bodies.tsv.
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

struct BootArg
{
    char pad[8];
    int f8;
};

extern void func_172A70(struct BootObj *object, struct BootArg *arg);

void func_00171748(struct BootObj *object, struct BootArg *arg)
{
    struct BootNode *node = (struct BootNode *)((char *)object->table
                                                + 0x3C4
                                                + object->index * 0x30);

    if (arg->f8 < -9999) {
        node->flags &= ~0x100u;
        node->flags |= 0x200u;
    } else {
        node->flags &= ~0x200u;
        node->flags |= 0x100u;
    }
    func_172A70(object, arg);
}
