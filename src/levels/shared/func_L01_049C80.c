/* func_L01_049C80 -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_09F870.c.
 */

typedef struct Node
{
    struct Node *prev;
    struct Node *next;
} Node;
extern Node *D_L01_0031F57C;

void func_L01_049C80(Node *node)
{
    Node *head = D_L01_0031F57C;
    node->prev = head;
    node->next = head->next;
    head->next->prev = node;
    head->next = node;
}
