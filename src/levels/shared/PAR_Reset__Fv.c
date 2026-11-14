/* PAR_Reset__Fv -- 256 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the global element array (0x2C bytes per element, element count at
 * +0x2C00). For each element the linked list starting there is reset: every
 * node points to itself and the head field is replaced by the sentinel
 * (element + 0x14). The block of slots is then relinked (nodes of 0x10 bytes),
 * and three final calls are made (two helper functions and memset).
 */

typedef struct ParNode ParNode;
typedef struct ParElem ParElem;
typedef struct ParHeader ParHeader;
typedef struct ParSlots ParSlots;

struct ParNode {
    ParNode *f00;
    ParNode *f04;
    ParNode *f08;
    ParNode *f0C;
};

struct ParElem {
    unsigned char pad00[0x14];
    ParNode *f14;
    ParNode *f18;
    ParNode *f1C;
    ParNode *f20;
    unsigned char pad24[0x08];
};

struct ParHeader {
    ParElem elems[256];
    int count;
};

struct ParSlots {
    ParNode *f00;
    ParNode *f04;
    int f08;
    void *f0C;
    unsigned char pad10[0x10];
    void *f20;
    unsigned char pad24[0x10];
    void *f34;
    unsigned int f38;
};

extern ParHeader D_L14_0034CF0C;
extern ParSlots D_L14_0034CED0;

extern void func_L14_07DD10(void *p);
extern void func_L14_07DD70(void *p);
extern void *memset(void *s, int c, unsigned int n);

void PAR_Reset__Fv(void)
{
    ParElem *e = (ParElem *)&D_L14_0034CF0C;
    ParElem *end = e + ((ParHeader *)e)->count;

    for (; e != end; e++) {
        ParNode *n = e->f20;
        while (n != (ParNode *)((char *)e + 0x14)) {
            ParNode *next = n->f0C;
            n->f08 = n;
            n->f0C = n;
            n->f04 = n;
            n->f00 = n;
            n = next;
        }
        e->f1C = (ParNode *)((char *)e + 0x14);
        e->f20 = (ParNode *)((char *)e + 0x14);
        e->f18 = (ParNode *)((char *)e + 0x14);
        e->f14 = (ParNode *)((char *)e + 0x14);
    }

    {
        ParSlots *a = &D_L14_0034CED0;
        ParNode *p = a->f04;
        int n = a->f08;
        ParNode *last = (ParNode *)((char *)p + n * 16 - 0x10);
        while (p != last) {
            p->f04 = (ParNode *)((char *)p + 0x10);
            p = (ParNode *)((char *)p + 0x10);
        }
        p->f04 = 0;
        D_L14_0034CED0.f00 = D_L14_0034CED0.f04;
        func_L14_07DD10(&D_L14_0034CED0.f0C);
        func_L14_07DD70(&D_L14_0034CED0.f20);
        memset(D_L14_0034CED0.f34, 0, D_L14_0034CED0.f38);
    }
}
