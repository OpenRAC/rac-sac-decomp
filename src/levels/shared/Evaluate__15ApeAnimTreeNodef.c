/* Evaluate__15ApeAnimTreeNodef -- 144 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ApeAnimTreeNode ApeAnimTreeNode;
typedef struct ApeAnimKeyStream ApeAnimKeyStream;
typedef struct ApeAnimNodeList ApeAnimNodeList;

typedef void (*ApeAnimKeyProc)(void *node, float time);

struct ApeAnimKeyStream {
    char              m_pad00[0x38];
    short             m_phase;      /* 0x38 */
    ApeAnimKeyProc    m_proc;       /* 0x3C */
};

struct ApeAnimNodeList {
    ApeAnimTreeNode **m_items;      /* 0x0C */
    unsigned short    m_count;      /* 0x10 */
};

struct ApeAnimTreeNode {
    void                   *m_vtable; /* 0x00 */
    void                   *m_unk04;  /* 0x04 */
    void                   *m_unk08;  /* 0x08 */
    ApeAnimNodeList         m_list;   /* 0x0C */
    char                    m_pad14[0x10];
    ApeAnimKeyStream       *m_stream; /* 0x24 */
};

void Evaluate__15ApeAnimTreeNodef(ApeAnimTreeNode *self, float time)
{
    ApeAnimNodeList *list;
    unsigned int      i;

    for (i = 0; i < (list = &self->m_list)->m_count; i++) {
        ApeAnimTreeNode *item =
            *((ApeAnimTreeNode **)((char *)self->m_list.m_items + (i << 2)));
        if (item) {
            ApeAnimKeyStream *ks = item->m_stream;
            ks->m_proc((char *)item + ks->m_phase, time);
        }
    }
}
