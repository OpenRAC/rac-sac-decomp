/* HoloKnuckleAkimbo_Term__FP4Moby -- 16 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct HoloTarget {
    char pad[0x3B8];
    int alive;
} HoloTarget;

typedef struct HoloPvars {
    HoloTarget *target;
} HoloPvars;

typedef struct Moby {
    char pad[0x58];
    HoloPvars *pvars;
} Moby;

void HoloKnuckleAkimbo_Term__FP4Moby(Moby *self)
{
    self->pvars->target->alive = 0;
}
