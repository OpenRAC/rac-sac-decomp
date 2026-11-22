/* LEVEL_DontRespawnMobyImmediate__FP4Moby -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * When a link word is set, computes a bit index from the object and sets that
 * bit in two bitmap tables.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0194C0.c.
 */

extern char G_UberBOG[];
extern char D_L01_0024D44C[];

void LEVEL_DontRespawnMobyImmediate__FP4Moby(char *a0)
{
    char *p;
    int idx;
    unsigned int bit;
    unsigned int widx;

    if (*(void **)(a0 + 0x5C) == 0) {
        return;
    }
    p = *(char **)G_UberBOG;
    idx = ((int)a0 - *(int *)(p + 0x44)) >> 7;
    widx = (unsigned int)idx >> 5;
    bit = 1u << (idx & 31);
    ((unsigned int *)*(char **)(*(char **)D_L01_0024D44C + 0xC))[widx] |= bit;
    ((unsigned int *)*(char **)(*(char **)D_L01_0024D44C + 0x10))[widx] |= bit;
}
