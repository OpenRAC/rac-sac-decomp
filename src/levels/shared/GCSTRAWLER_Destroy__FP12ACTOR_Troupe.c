/* GCSTRAWLER_Destroy__FP12ACTOR_Troupe -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks every group of the object's list and runs the node handler on each
 * node after the head node of the group's chain.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0F0328.c.
 */

typedef struct Node {
    struct Node *next_00;
} Node;

typedef struct Group {
    struct Group *next_00;
    char pad_04[8];
    Node *head_0C;
} Group;

extern void GCSTRAWLER_DestroyActor__FP16GCSTRAWLER_Actor(void *node);

void GCSTRAWLER_Destroy__FP12ACTOR_Troupe(char *object)
{
    Group *group = *(Group **)(object + 8);
    Node *node;

    for (; group != 0; group = group->next_00) {
        for (node = group->head_0C->next_00; node != 0; node = node->next_00) {
            GCSTRAWLER_DestroyActor__FP16GCSTRAWLER_Actor(node);
        }
    }
}
