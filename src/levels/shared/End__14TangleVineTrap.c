/* End__14TangleVineTrap -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Src {
    char pad[8];
    unsigned short val;
} Src;

typedef struct Dst {
    char pad[0x74];
    unsigned short val;
} Dst;

typedef struct Mid {
    char pad[0xC];
    Src *src;
    Dst *dst;
} Mid;

typedef struct TangleVineTrap {
    char pad[4];
    Mid *mid;
} TangleVineTrap;

void End__14TangleVineTrap(TangleVineTrap *self)
{
    Mid *mid;

    mid = self->mid;
    mid->dst->val = mid->src->val;
}
