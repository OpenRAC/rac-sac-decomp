/* ArenaWeightDispenser_Term__FP4Moby -- 92 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Gives back the pool entry held by the attached slot and marks the slot as
 * empty.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/17_multiplayer_02/LEVEL_17_16A5D0.c.
 */

typedef struct {
    char pad_00[0xC];
    unsigned short handle;
    char pad_0E;
    unsigned char pool;
} Slot;

typedef struct {
    char pad_00[0x58];
    Slot *slot;
} Owner;

typedef struct {
    char pad_00[0x68];
} Pool;

extern Pool G_dynaGrid[];
extern void WORLDGRID_RemoveBoundedEntry__FP9WorldGridi(Pool *pool, unsigned int index);

static __inline__ void Release(Pool *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        WORLDGRID_RemoveBoundedEntry__FP9WorldGridi(pool, *h);
        *h = 0xFFFF;
    }
}

void ArenaWeightDispenser_Term__FP4Moby(Owner *o)
{
    Slot *slot = o->slot;

    Release(&G_dynaGrid[slot->pool], &slot->handle);
}
