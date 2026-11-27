/* GetNumChannels__15ApeAnimTreeNode -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeAnimChannelArray {
    void *data;
    unsigned short count;
} ApeAnimChannelArray;

typedef struct ApeAnimTreeNode {
    char pad[0x20];
    ApeAnimChannelArray *channels;
} ApeAnimTreeNode;

int GetNumChannels__15ApeAnimTreeNode(ApeAnimTreeNode *self)
{
    return self->channels->count;
}
