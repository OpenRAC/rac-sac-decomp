/* MOBY_RegisterPostUpdateCallback__FP4MobyPFP4Moby_v -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Appends a pair to a 16-slot table and bumps the global count.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_080C98.c.
 */

typedef struct { int first; int second; } Pair;
extern unsigned int D_L01_00322348;
extern Pair D_L01_00322350[];
void MOBY_RegisterPostUpdateCallback__FP4MobyPFP4Moby_v(int first, int second)
{
    unsigned int index = D_L01_00322348;
    Pair *slot;
    if (index < 16) {
        slot = &D_L01_00322350[index];
        D_L01_00322348 = index + 1;
        slot->first = first;
        slot->second = second;
    }
}
