/* Submarine_Term__FP4Moby -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Unlinks the node from the doubly linked list it sits in and clears its back
 * pointer.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_15E458.c.
 */

typedef struct Link {
    struct Link *next;
    char pad_04[0x10];
    struct Link *prev;
} Link;

typedef struct Node {
    char pad_00[4];
    Link link;
} Node;

void Submarine_Term__FP4Moby(char *object)
{
    Node *node = *(Node **)(object + 0x58);
    Link *link = &node->link;
    Link *prev = link->prev;

    if (prev != 0) {
        prev->next = link->next;
        if (link->next != 0)
            link->next->prev = link->prev;
        link->prev = 0;
    }
}
