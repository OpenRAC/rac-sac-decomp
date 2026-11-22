/* Lvl07CrystalMound_Term__FP4Moby -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Unlinks the list node at the start of the object's record from its
 * neighbours, clears its back link, then notifies the object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_1A4310.c.
 */

typedef struct Node {
    struct Node *next;
    char pad4[0x10];
    struct Node *back;
} Node;

typedef struct Obj {
    char pad0[0x58];
    Node *rec;
} Obj;

extern void LEVEL_DontRespawnMobyAfterCheckpoint__FP4Moby(Obj *o);

void Lvl07CrystalMound_Term__FP4Moby(Obj *o)
{
    Node *n = o->rec;

    if (n->back != 0) {
        n->back->next = n->next;
        if (n->next != 0)
            n->next->back = n->back;
        n->back = 0;
    }
    LEVEL_DontRespawnMobyAfterCheckpoint__FP4Moby(o);
}
