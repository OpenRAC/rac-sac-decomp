/* AddModifierNode__17ApeAnimCompositorP15ApeAnimTreeNode -- LEVEL11.REL 0x0025DD68, 36 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   Retail (36 bytes): same append envelope as AddSibling, with the
 *   ApeTArray at this+0xAC.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (sdk991111-sdkas:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
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
