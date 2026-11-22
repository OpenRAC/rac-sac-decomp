/* Quat_ConvertToMatrix__FP7MATRIX4PC4QUAT -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * After a call, clears six float fields of a record and sets a seventh one to
 * 1.0f.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/Quat_ConvertToMatrix__FP7MATRIX4PC4QUAT_LEVEL_15.c.
 */

typedef struct {
    char pad0[0xC];
    float f0C;
    char pad1[0xC];
    float f1C;
    char pad2[0xC];
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
} Rec;

extern void Quat_ConvertToMatrixInternal__H1Z7MATRIX4_PX01PC4QUAT_v(float *m, float *q);

void Quat_ConvertToMatrix__FP7MATRIX4PC4QUAT(Rec *p, float *q)
{
    float zero;
    float one;

    Quat_ConvertToMatrixInternal__H1Z7MATRIX4_PX01PC4QUAT_v((float *)p, q);
    zero = 0.0f;
    one = 1.0f;
    p->f38 = zero;
    p->f34 = zero;
    p->f30 = zero;
    p->f2C = zero;
    p->f1C = zero;
    p->f0C = zero;
    p->f3C = one;
}
