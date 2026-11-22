/* func_L01_049CD0 -- 132 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Rebuilds a linked list, moving zero-amount nodes to a free list and summing
 * the rest.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_09F8C0.c.
 */

typedef struct Link Link;
struct Link {
    Link *previous;
    Link *next;
};

typedef struct Node Node;
struct Node {
    Node *next;
    Link link;
    int unused;
    int amount;
    int limit;
};

typedef struct {
    int unused[2];
    Node *head;
    Link sentinel;
    int pad_14;
    int total;
} Container;

extern Node *D_L01_0031F564;

void func_L01_049CD0(Container *container)
{
    Node **link = &container->head;
    Node *node;
    Link *sentinel = &container->sentinel;
    int total = 0;
    sentinel->next = sentinel;
    sentinel->previous = sentinel;
    while ((node = *link) != 0) {
        int amount = node->amount;
        if (amount == 0) {
            *link = node->next;
            node->next = D_L01_0031F564;
            D_L01_0031F564 = node;
        } else {
            total += amount;
            if (amount < node->limit) {
                Link *entry = &node->link;
                Link *s = &container->sentinel;
                Link *first = s->next;
                entry->previous = s;
                entry->next = first;
                first->previous = entry;
                s->next = entry;
            }
            link = &node->next;
        }
    }
    container->total = total;
}
