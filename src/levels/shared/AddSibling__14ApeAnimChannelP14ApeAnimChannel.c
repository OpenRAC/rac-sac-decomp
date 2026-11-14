/* AddSibling__14ApeAnimChannelP14ApeAnimChannel -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the sibling pointer on the stack, then appends it to the ApeTArray
 * that lives at this+0x10.
 */

typedef struct ApeAnimChannel ApeAnimChannel;

extern void Append__t9ApeTArray1ZP14ApeAnimChannelRCP14ApeAnimChannel(
    void *list, ApeAnimChannel *const *elem);

void AddSibling__14ApeAnimChannelP14ApeAnimChannel(
    ApeAnimChannel *self, ApeAnimChannel *sibling)
{
    ApeAnimChannel *entry = sibling;

    Append__t9ApeTArray1ZP14ApeAnimChannelRCP14ApeAnimChannel(
        (char *)self + 0x10, &entry);
}
