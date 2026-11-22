/* IKLEG_ExtendLeg__FP11IKLEG_Statef -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clamps two float fields of a record to zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0294F0.c.
 */

typedef struct {
    char pad[0x58];
    float f58;
    char pad2[0x28];
    float f84;
} Rec;

void IKLEG_ExtendLeg__FP11IKLEG_Statef(Rec *p, float v)
{
    float neg;
    float f0;
    float f1;
    float zero;

    neg = -v;
    f0 = p->f58;
    zero = 0.0f;
    f0 = f0 + neg;
    p->f58 = f0;
    if (f0 < zero) {
        p->f58 = zero;
    }
    f1 = p->f84 + v * -0.1f;
    p->f84 = f1;
    if (f1 < zero) {
        p->f84 = zero;
    }
}
