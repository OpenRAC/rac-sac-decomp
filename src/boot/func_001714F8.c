/* func_001714F8 -- 96 bytes.
 *
 * A function of the boot executable at 0x001714F8; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * The second parameter is a float used as an accumulator. If the object has a
 * sub-object at +0x0C, the float is multiplied by its field +0x144 and then by
 * field +0x58 of the sub-object's field +0x90. The result is converted to an
 * integer and stored in field +0x18 of the node, whose flags also get bit 3
 * set.
 */

struct BootInner
{
    char pad[0x58];
    float f58;
};

struct BootBig
{
    char pad[0x90];
    struct BootInner *f90;
    char pad2[0xB0];
    float f144;
};

struct BootObj
{
    char pad[0x0C];
    struct BootBig *f0c;
    char pad2[0x14];
    int index;
    char pad3[0x28];
    char *table;
};

struct __attribute__((packed)) BootNode
{
    char pad00[4];
    unsigned int flags;
    char pad08[0x10];
    int f18;
    char pad1c[8];
    unsigned int f24;
    char pad28[8];
};

int func_001714F8(struct BootObj *object, float scale)
{
    struct BootNode *node = (struct BootNode *)((char *)object->table
                                                + 0x3C4
                                                + object->index * 0x30);
    int result = 0;

    if (object->f0c) {
        scale *= object->f0c->f144;
        scale *= object->f0c->f90->f58;
    }
    node->f18 = (int)scale;
    node->flags |= 0x8u;
    return result;
}
