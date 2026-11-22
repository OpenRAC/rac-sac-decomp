/* GadgetBotScanner_Term__FP4Moby -- 92 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Gives back the pool entry held by the attached slot and marks the slot as
 * empty.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_16A058.c.
 */

typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Obj;

typedef struct {
    char pad_00[4];
    unsigned short handle;
    char pad_06;
    unsigned char pool;
} Slot;

typedef struct {
    char pad_00[0x58];
    Slot *slot;
} Owner;

extern Obj G_dynaGrid[];
extern void WORLDGRID_RemoveBoundedEntry__FP9WorldGridi(Obj *o, unsigned int index);

static __inline__ void Release(Obj *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        WORLDGRID_RemoveBoundedEntry__FP9WorldGridi(pool, *h);
        *h = 0xFFFF;
    }
}

void GadgetBotScanner_Term__FP4Moby(Owner *o)
{
    Slot *slot = o->slot;

    Release(&G_dynaGrid[slot->pool], &slot->handle);
}
