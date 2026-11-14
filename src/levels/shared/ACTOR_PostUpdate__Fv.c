/* ACTOR_PostUpdate__Fv -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Same linked list as ACTOR_Update, but the method called is the one at offset
 * 0x14 of the actor definition (the second method pointer).
 */

typedef struct Actor Actor;
typedef struct ActorDef ActorDef;

struct ActorDef {
    char pad[0x10];
    void (*method)(Actor *);
    void (*postMethod)(Actor *);
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

/* the actor table lives at 0x31F560 in the module (anonymous) */
extern ActorGlobal D_L01_0031F560;

extern Actor *func_L01_049CA8(Actor *node);
extern void func_L01_049CD0(Actor *node);

void ACTOR_PostUpdate__Fv(void)
{
    ActorGlobal *g = &D_L01_0031F560;
    Actor *node = g->head;

    while (node != (Actor *)&g->end) {
        if (node->def->postMethod != 0) {
            node->def->postMethod(node);
            func_L01_049CD0(node);
        }
        if (node->update == 0)
            node = func_L01_049CA8(node);
        else
            node = node->next;
    }
}
