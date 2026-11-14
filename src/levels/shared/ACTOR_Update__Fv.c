/* ACTOR_Update__Fv -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the linked list of actors and calls the method at offset 0x10 of each
 * actor definition. The end of the list is marked by the address (array +
 * 0x1C).
 */

typedef struct Actor Actor;
typedef struct ActorDef ActorDef;

struct ActorDef {
    char pad[0x10];
    void (*method)(Actor *);
};

struct Actor {
    Actor *prev;
    Actor *next;
    void *field_08;
    void *field_0C;
    void *field_10;
    ActorDef *def;
    void *update;
};

typedef struct ActorGlobal {
    char pad[0x1C];
    int end;
    Actor *head;
} ActorGlobal;

/* the actor table lives at 0x3108E0 in the module (anonymous) */
extern ActorGlobal D_L13_3108E0;

extern Actor *func_L13_049CA0(Actor *node);
extern void func_L13_049CC8(Actor *node);

void ACTOR_Update__Fv(void)
{
    ActorGlobal *g = &D_L13_3108E0;
    Actor *node = g->head;

    while (node != (Actor *)&g->end) {
        if (node->def->method != 0) {
            node->def->method(node);
            func_L13_049CC8(node);
        }
        if (node->update == 0)
            node = func_L13_049CA0(node);
        else
            node = node->next;
    }
}
