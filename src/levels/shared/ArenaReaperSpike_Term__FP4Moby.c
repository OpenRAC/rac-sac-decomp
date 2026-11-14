/* ArenaReaperSpike_Term__FP4Moby -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Two PAR groups of the moby are destroyed: the ones at 0x68 and 0x84 of the
 * object the moby points to at 0x58.
 */

typedef struct Moby Moby;
typedef struct PAR_Group PAR_Group;
typedef struct MobyExtra MobyExtra;

struct MobyExtra {
    unsigned char reserved_000[0x68];
    PAR_Group *par_group_068;
    unsigned char reserved_06C[0x18];
    PAR_Group *par_group_084;
};

struct Moby {
    unsigned char reserved_000[0x58];
    MobyExtra *extra;
};

extern void PAR_DestroyGroup__FP9PAR_Group(PAR_Group *group);

void ArenaReaperSpike_Term__FP4Moby(Moby *moby)
{
    MobyExtra *extra = moby->extra;

    PAR_DestroyGroup__FP9PAR_Group((PAR_Group *)((char *)extra + 0x68));
    PAR_DestroyGroup__FP9PAR_Group((PAR_Group *)((char *)extra + 0x84));
}
