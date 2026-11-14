/* Arena3Dodgeball_Term__FP4Moby -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby Moby;
typedef struct PAR_Group PAR_Group;
typedef struct MobyExtra MobyExtra;

struct MobyExtra {
    unsigned char reserved_000[0x14];
    PAR_Group *par_group;
};

struct Moby {
    unsigned char reserved_000[0x58];
    MobyExtra *extra;
};

extern void PAR_DestroyGroup__FP9PAR_Group(PAR_Group *group);

void Arena3Dodgeball_Term__FP4Moby(Moby *moby)
{
    PAR_DestroyGroup__FP9PAR_Group((PAR_Group *)((char *)moby->extra + 0x14));
}
