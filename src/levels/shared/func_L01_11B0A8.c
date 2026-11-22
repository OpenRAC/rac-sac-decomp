/* func_L01_11B0A8 -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the owner list calling a helper on each node, then clears the list
 * head.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1CD7D0.c.
 */

void func_L01_11AFF8(void *o, void *n);

struct Node {
    unsigned char pad00[0x6C];
    struct Node *next;
};

struct Owner {
    unsigned char pad00[0x40];
    struct Node *head;
};

void func_L01_11B0A8(struct Owner *o)
{
    struct Node *n;

    n = o->head;
    while (n != 0) {
        func_L01_11AFF8(o, n);
        n = n->next;
    }
    o->head = 0;
}
