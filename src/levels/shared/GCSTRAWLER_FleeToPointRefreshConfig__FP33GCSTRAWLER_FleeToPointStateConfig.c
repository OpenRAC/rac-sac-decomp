/* GCSTRAWLER_FleeToPointRefreshConfig__FP33GCSTRAWLER_FleeToPointStateConfig -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores 1.0f / p->f00 into the slot at 0x18.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_10FA10.c.
 */

typedef struct {
    float f[8];
} Rec;

void GCSTRAWLER_FleeToPointRefreshConfig__FP33GCSTRAWLER_FleeToPointStateConfig(Rec *p)
{
    p->f[6] = 1.0f / p->f[0];
}
