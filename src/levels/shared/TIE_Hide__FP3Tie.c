/* TIE_Hide__FP3Tie -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears the object's active flag and releases its pooled slot (if it holds
 * one) through the slot table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_076328.c.
 */

typedef struct Record {
    int count0;
    int count1;
    char remaining[0x60];
} Record;

typedef struct Obj {
    char pad0[0x54];
    unsigned short id;
    char pad56;
    unsigned char slot;
    char pad58[9];
    unsigned char flags;
} Obj;

extern Record G_dynaGrid[2];
extern void WORLDGRID_RemoveBoundedEntry__FP9WorldGridi(Record *r, unsigned int id);

void TIE_Hide__FP3Tie(Obj *o)
{
    Record *slot = &G_dynaGrid[o->slot];

    o->flags &= 0xFE;
    if (o->id != 0xFFFF) {
        WORLDGRID_RemoveBoundedEntry__FP9WorldGridi(slot, o->id);
        o->id = 0xFFFF;
    }
}
