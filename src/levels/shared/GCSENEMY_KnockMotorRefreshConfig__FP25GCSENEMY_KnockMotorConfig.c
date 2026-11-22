/* GCSENEMY_KnockMotorRefreshConfig__FP25GCSENEMY_KnockMotorConfig -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * RAC5 vague 22 (L09), appel d'un helper local * avec deux flottants et 1/30.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_FD9C8.c.
 */

typedef struct {
    float a;
    float b;
    char sub[8];
} S;

extern void MU_OverdampedSpringSetup__FP11SpringCoefffff(char *sub, float x, float y, float z);

void GCSENEMY_KnockMotorRefreshConfig__FP25GCSENEMY_KnockMotorConfig(S *p)
{
    MU_OverdampedSpringSetup__FP11SpringCoefffff(p->sub, p->a, p->b, 1.0f / 30.0f);
}
