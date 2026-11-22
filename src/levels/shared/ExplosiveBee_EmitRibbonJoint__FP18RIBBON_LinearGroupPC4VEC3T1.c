/* ExplosiveBee_EmitRibbonJoint__FP18RIBBON_LinearGroupPC4VEC3T1 -- 104 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_16F338.c.
 */

typedef struct {
    float f00;
    float f04;
    float f08;
} V3;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    int f1C;
} S;

void RIBBON_EmitJoint__FP18RIBBON_LinearGroupPC18RIBBON_LinearPointb(void *a0, S *a1, int a2);

void ExplosiveBee_EmitRibbonJoint__FP18RIBBON_LinearGroupPC4VEC3T1(void *a0, V3 *a1, V3 *a2)
{
    S s;

    s.f00 = a1->f00;
    s.f04 = a1->f04;
    s.f08 = a1->f08;
    s.f0C = a2->f00;
    s.f10 = a2->f04;
    s.f14 = a2->f08;
    s.f18 = 0.5f;
    s.f1C = 0;
    RIBBON_EmitJoint__FP18RIBBON_LinearGroupPC18RIBBON_LinearPointb(a0, &s, 0);
}
