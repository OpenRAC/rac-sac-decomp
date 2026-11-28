/* ACTOR_LinkedBlockEmit__H2Z10SplashListZ6Splash_P12ACTOR_TroupeP11ACTOR_Blocki_Pv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Takes the next free actor, links it at the head, and counts it.
 */

typedef struct Node {
    char pad[40];
    struct Node *next;
} Node;

typedef struct Block {
    Node *head;
    Node *link;
} Block;

typedef struct Troupe {
    char pad[12];
    Block *block;
    int count;
} Troupe;

typedef struct Actor {
    int unused;
} Actor;

Node *ACTOR_LinkedBlockEmit__H2Z10SplashListZ6Splash_P12ACTOR_TroupeP11ACTOR_Blocki_Pv(Actor *self, Troupe *troupe)
{
    Block *block;
    Node *node;

    block = troupe->block;
    node = block->link;
    block->link = node->next;
    node->next = block->head;
    block->head = node;
    troupe->count += 1;
    return node;
}
