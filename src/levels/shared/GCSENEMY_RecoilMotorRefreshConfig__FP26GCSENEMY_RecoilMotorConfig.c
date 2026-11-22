/* GCSENEMY_RecoilMotorRefreshConfig__FP26GCSENEMY_RecoilMotorConfig -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards the object's two floats and a step to the shared code.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0FD820.c.
 */

typedef struct {
    char pad[8];
    float f08;
    float f0C;
} Obj;

extern void MU_OverdampedSpringSetup__FP11SpringCoefffff(void *p, float a, float b, float c);

void GCSENEMY_RecoilMotorRefreshConfig__FP26GCSENEMY_RecoilMotorConfig(Obj *self)
{
    MU_OverdampedSpringSetup__FP11SpringCoefffff((char *)self + 0x10, self->f08, self->f0C, 1.0f / 30.0f);
}
