/* func_0016AB20 -- 32 bytes.
 *
 * A function of the boot executable at 0x0016AB20; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * Splices the second node after the first one in a doubly linked list (prev at
 * +0x00, next at +0x04) and returns 0. The next pointer of the first node is
 * read before any store, and the "next->prev = node" write reloads it from the
 * second node because the stores may alias.
 */

struct BootListNode {
    struct BootListNode *prev;
    struct BootListNode *next;
};

int func_0016AB20(struct BootListNode *pos, struct BootListNode *node)
{
    struct BootListNode *next = pos->next;

    node->prev = pos;
    node->next = next;
    pos->next = node;
    node->next->prev = node;
    return 0;
}
