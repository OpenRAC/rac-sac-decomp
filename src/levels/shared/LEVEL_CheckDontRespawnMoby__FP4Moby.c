/* LEVEL_CheckDontRespawnMoby__FP4Moby -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_019478.c.
 */

/* LEVEL_01.REL:0x019478: bounded bitmap-bit test. */
extern char *G_UberBOG;
extern char *D_L01_0024D44C;

int LEVEL_CheckDontRespawnMoby__FP4Moby(int value)
{
    int origin = *(int *)(G_UberBOG + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_L01_0024D44C + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
