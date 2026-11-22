/* WORLDGRID_RemoveBoundedEntry__FP9WorldGridi -- 116 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Unlinks the last node of a chain: the level keeps the chain nodes at 0x64
 * (one node is sixteen bytes) and the chain descriptors at 0x60 (one
 * descriptor is eight bytes). The last node of the descriptor is moved into
 * the slot of `index' and the chain is relinked.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_095858.c.
 */

typedef struct {
    float v[2];
    unsigned short pad8;
    unsigned short fA;
    unsigned short *next;
} Node;

typedef struct {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
} Entry;

typedef struct {
    char pad60[0x60];
    Entry *entries;
    Node *nodes;
} Obj;

void WORLDGRID_RemoveBoundedEntry__FP9WorldGridi(Obj *o, unsigned int index)
{
    Node *node = &o->nodes[index];
    Entry *e = &o->entries[node->fA];
    unsigned int a = e->f4;
    unsigned int b = e->f6 - 1;
    Node *base = o->nodes + a;

    if (index - a != b) {
        Node *n = base + b;

        *n->next = (unsigned short)index;
        *node = *n;
    }
    e->f6 = (unsigned short)b;
}
