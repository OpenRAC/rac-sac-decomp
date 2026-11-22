/* GCSENEMY_MotorSetActive__FP14GCSENEMY_MotorPFP8MATRIX43P26GCSENEMY_MotorInstanceDataf_v -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resets four fields of the caller's record and hands back a pointer to the
 * field that follows them.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0FCE60.c.
 */

typedef struct {
    int f_00;
    float f_04;
    int f_08;
    int f_0C;
    char pad[0xF8];
    int f_108;
    int f_10C;
} Rec;

int *GCSENEMY_MotorSetActive__FP14GCSENEMY_MotorPFP8MATRIX43P26GCSENEMY_MotorInstanceDataf_v(Rec *a0, int a1)
{
    a0->f_10C = 1;
    a0->f_00 = a1;
    a0->f_04 = 1.0f;
    a0->f_108 = 0;
    a0->f_08 = 0;
    return &a0->f_0C;
}
