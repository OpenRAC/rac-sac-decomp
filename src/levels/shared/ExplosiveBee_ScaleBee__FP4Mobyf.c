/* ExplosiveBee_ScaleBee__FP4Mobyf -- 120 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scales the record's nine floats by the caller's factor.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_171C70.c.
 */

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    int pad_0C;
    float f_10;
    float f_14;
    float f_18;
    int pad_1C;
    float f_20;
    float f_24;
    float f_28;
} Rec;

void ExplosiveBee_ScaleBee__FP4Mobyf(Rec *a0, float f12)
{
    float *p = &a0->f_20;
    float *q = &a0->f_10;

    p[0] = p[0] * f12;
    p[1] = p[1] * f12;
    p[2] = p[2] * f12;
    a0->f_00 = a0->f_00 * f12;
    a0->f_04 = a0->f_04 * f12;
    a0->f_08 = a0->f_08 * f12;
    q[0] = q[0] * f12;
    q[1] = q[1] * f12;
    q[2] = q[2] * f12;
}
