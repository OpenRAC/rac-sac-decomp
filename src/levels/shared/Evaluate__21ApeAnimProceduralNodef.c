/* Evaluate__21ApeAnimProceduralNodef -- 236 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeAnimProceduralNode ApeAnimProceduralNode;
typedef struct ApeAnimNodeList ApeAnimNodeList;
typedef struct ApeAnimStreamA ApeAnimStreamA;
typedef struct ApeAnimStreamB ApeAnimStreamB;
typedef struct ApeAnimItemA ApeAnimItemA;
typedef struct ApeAnimItemB ApeAnimItemB;

typedef void (*ApeAnimKeyProc)(void *node, float time);

struct ApeAnimNodeList {
    void           *m_items;      /* 0x00 */
    unsigned short  m_count;      /* 0x04 */
};

struct ApeAnimStreamA {
    char              m_pad00[0x18];
    short             m_phase;    /* 0x18 */
    ApeAnimKeyProc    m_proc;     /* 0x1C */
};

struct ApeAnimStreamB {
    char              m_pad00[0x10];
    short             m_phase;    /* 0x10 */
    ApeAnimKeyProc    m_proc;     /* 0x14 */
};

struct ApeAnimItemA {
    char              m_pad00[0x38];
    ApeAnimStreamA   *m_stream;   /* 0x38 */
};

struct ApeAnimItemB {
    char              m_pad00[0x20];
    ApeAnimStreamB   *m_stream;   /* 0x20 */
};

struct ApeAnimProceduralNode {
    void                 *m_vtable;    /* 0x00 */
    void                 *m_unk04;
    void                 *m_unk08;
    void                 *m_unk0C;
    void                 *m_unk10;
    void                 *m_unk14;
    void                 *m_unk18;
    void                 *m_unk1C;
    void                 *m_unk20;
    void                 *m_unk24;
    void                 *m_unk28;
    float                 m_accum;     /* 0x2C */
    char                  m_pad30[0x04];
    ApeAnimNodeList       m_list1;     /* 0x34 */
    char                  m_pad3C[0x0C];
    ApeAnimNodeList       m_list2;     /* 0x48 */
};

void Evaluate__21ApeAnimProceduralNodef(ApeAnimProceduralNode *self, float time)
{
    ApeAnimNodeList *list1;
    ApeAnimNodeList *list2;
    unsigned int      i;

    self->m_accum = self->m_accum + time;

    for (i = 0; i < (list1 = &self->m_list1)->m_count; i++) {
        ApeAnimItemA *item =
            *((ApeAnimItemA **)((char *)self->m_list1.m_items + (i << 2)));
        ApeAnimStreamA *ks = item->m_stream;
        ks->m_proc((char *)item + ks->m_phase, time);
    }

    for (i = 0; i < (list2 = &self->m_list2)->m_count; i++) {
        ApeAnimItemB *item =
            *((ApeAnimItemB **)((char *)self->m_list2.m_items + (i << 2)));
        ApeAnimStreamB *ks = item->m_stream;
        ks->m_proc((char *)item + ks->m_phase, time);
    }
}
