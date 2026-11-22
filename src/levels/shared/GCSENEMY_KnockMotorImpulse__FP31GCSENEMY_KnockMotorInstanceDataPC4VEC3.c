/* GCSENEMY_KnockMotorImpulse__FP31GCSENEMY_KnockMotorInstanceDataPC4VEC3 -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Adds the three floats of the second argument to the three floats the first
 * record keeps at +0x10.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0FDC00.c.
 */

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
} Rec;

void GCSENEMY_KnockMotorImpulse__FP31GCSENEMY_KnockMotorInstanceDataPC4VEC3(Rec *a0, float *a1)
{
    float *p = (float *)((char *)a0 + 0x10);
    a0->f_10 += a1[0];
    p[1] += a1[1];
    p[2] += a1[2];
}
