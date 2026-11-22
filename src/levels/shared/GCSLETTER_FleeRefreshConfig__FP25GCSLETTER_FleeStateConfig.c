/* GCSLETTER_FleeRefreshConfig__FP25GCSLETTER_FleeStateConfig -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * P->f[8] = 1.0f / p->f[0].
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_107698.c.
 */

typedef struct {
    float f[32];
} Obj;

void GCSLETTER_FleeRefreshConfig__FP25GCSLETTER_FleeStateConfig(Obj *p)
{
    p->f[8] = 1.0f / p->f[0];
}
