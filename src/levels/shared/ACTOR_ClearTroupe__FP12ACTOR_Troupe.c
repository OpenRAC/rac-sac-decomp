/* ACTOR_ClearTroupe__FP12ACTOR_Troupe -- 164 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_09FB70.c.
 */

extern unsigned int D_L01_0031F564;

typedef struct Node Node;
typedef struct Obj Obj;

struct Node {
    Node *next;
    Node *prev;
};

struct Obj {
    unsigned int flag;
    unsigned int pad;
    Node *first;
    Node head;
    unsigned int *owner;
    unsigned int count;
};

void func_L01_049CA8(Obj *obj);

void ACTOR_ClearTroupe__FP12ACTOR_Troupe(Obj *obj)
{
    Node *head;
    Node *node;
    Node **link;
    Node *tail;
    unsigned int next;

    head = &obj->head;
    head->prev = head;
    head->next = head;
    if (obj->flag == 0)
        return;
    if (*(void (**)(Obj *))((char *)obj->owner + 0x20) != 0)
        (*(void (**)(Obj *))((char *)obj->owner + 0x20))(obj);
    link = &obj->first;
    while ((node = *link) != 0) {
        next = *(unsigned int *)node;
        *link = (Node *)next;
        node->next = (Node *)D_L01_0031F564;
        D_L01_0031F564 = (unsigned int)node;
    }
    tail = &obj->head;
    tail->prev = tail;
    obj->count = 0;
    obj->head.next = tail;
    func_L01_049CA8(obj);
}
