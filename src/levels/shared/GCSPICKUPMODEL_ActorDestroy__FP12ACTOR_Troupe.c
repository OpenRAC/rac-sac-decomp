/* GCSPICKUPMODEL_ActorDestroy__FP12ACTOR_Troupe -- 120 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks the object's chain of record blocks and runs the helper on every
 * 0xA4-byte entry.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1285A0.c.
 */

typedef struct Entry {
    char pad_00[0xA4];
} Entry;

typedef struct Block {
    struct Block *next;
    char pad_04[8];
    Entry *entries;
    int count;
} Block;

typedef struct Obj {
    char pad_00[8];
    Block *blocks;
} Obj;

extern void GCSPICKUPMODEL_Destroy__FP20GCSPICKUPMODEL_Actor();

void GCSPICKUPMODEL_ActorDestroy__FP12ACTOR_Troupe(Obj *object)
{
    Block *block;
    Entry *entry;
    Entry *end;

    for (block = object->blocks; block != 0; block = block->next) {
        entry = block->entries;
        end = entry + block->count;
        do {
            GCSPICKUPMODEL_Destroy__FP20GCSPICKUPMODEL_Actor(entry);
            entry++;
        } while (entry != end);
    }
}
