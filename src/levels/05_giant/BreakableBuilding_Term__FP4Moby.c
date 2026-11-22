/* BreakableBuilding_Term__FP4Moby -- 92 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Gives back the pool entry held by the attached slot and marks the slot as
 * empty.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_19F960.c.
 */

typedef struct {
    char pad60[0x60];
    void *entries;
    void *nodes;
} Obj;

typedef struct {
    unsigned short handle;
    char pad_02;
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

void BreakableBuilding_Term__FP4Moby(Owner *o)
{
    Slot *slot = o->slot;

    Release(&G_dynaGrid[slot->pool], &slot->handle);
}
