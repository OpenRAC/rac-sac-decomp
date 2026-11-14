/* func_0016AB20 -- 32 bytes.
 *
 * A function of the boot executable at 0x0016AB20; its placement is
 * listed in config/boot/bodies.tsv.
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
