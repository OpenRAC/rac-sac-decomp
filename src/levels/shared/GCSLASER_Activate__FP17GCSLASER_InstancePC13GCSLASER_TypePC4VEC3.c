/* GCSLASER_Activate__FP17GCSLASER_InstancePC13GCSLASER_TypePC4VEC3 -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Two 12-byte blocks moved inside one struct and three flags written around
 * them.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_11F3E8.c.
 */

typedef struct {
    float f[2];
    int x;
} F12;

typedef struct {
    char pad00[0x88];
    F12 second;
    F12 first;
    int flagA;
    int flagB;
    int flagC;
} Dest;

extern void GCSLASER_Activate__FP17GCSLASER_InstancePC13GCSLASER_TypePC4VEC3(Dest *dest, int unused, F12 *src);

void GCSLASER_Activate__FP17GCSLASER_InstancePC13GCSLASER_TypePC4VEC3(Dest *dest, int unused, F12 *src)
{
    dest->flagB = 0;
    dest->flagA = 1;
    dest->first = *src;
    dest->second = dest->first;
    dest->flagC = 0;
}
