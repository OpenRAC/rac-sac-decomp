/* AssignChannelData__15ApeAnimTreeNodeP15ApeAnimTreeNode -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

void AssignChannelData__15ApeAnimTreeNodeP15ApeAnimTreeNode(
    int *dst, int *src)
{
    int a;
    int b;

    a = *(int *)((char *)src + 0x20);
    *(int *)((char *)dst + 0x20) = a;
    b = *(int *)((char *)src + 0x8);
    *(int *)((char *)dst + 0x8) = b;
}
