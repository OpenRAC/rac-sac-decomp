/* AddModifierNode__17ApeAnimCompositorP15ApeAnimTreeNode -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeAnimCompositor ApeAnimCompositor;
typedef struct ApeAnimTreeNode ApeAnimTreeNode;

extern void Append__t9ApeTArray1ZP15ApeAnimTreeNodeRCP15ApeAnimTreeNode(
    void *list, ApeAnimTreeNode *const *elem);

void AddModifierNode__17ApeAnimCompositorP15ApeAnimTreeNode(
    ApeAnimCompositor *self, ApeAnimTreeNode *node)
{
    ApeAnimTreeNode *entry = node;

    Append__t9ApeTArray1ZP15ApeAnimTreeNodeRCP15ApeAnimTreeNode(
        (char *)self + 0xAC, &entry);
}
