/* FireSnake_Term__FP4Moby -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Moby Moby;
typedef struct Line_Group Line_Group;
typedef struct MobyExtra MobyExtra;

struct MobyExtra {
    unsigned char reserved_000[0x10C];
    Line_Group *line_group;
    unsigned char reserved_110[0x1B4];
    unsigned int sound_id;
};

struct Moby {
    unsigned char reserved_000[0x58];
    MobyExtra *extra;
};

extern void Line_Stop__FP10Line_Group(Line_Group *group);
extern void MOBY_StopSound__FUi(unsigned int sound);

void FireSnake_Term__FP4Moby(Moby *moby)
{
    MobyExtra *extra = moby->extra;

    Line_Stop__FP10Line_Group((Line_Group *)((char *)extra + 0x10C));
    MOBY_StopSound__FUi(extra->sound_id);
}
