/* Quat_ConvertToMatrix__FP8MATRIX43PC4QUAT -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * After a call, clears three float fields of a record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0E8910.c.
 */

typedef struct {
    char pad[0x24];
    float f24;
    float f28;
    float f2C;
} Rec;

extern void Quat_ConvertToMatrixInternal__H1Z8MATRIX43_PX01PC4QUAT_v(float *m, float *q);

void Quat_ConvertToMatrix__FP8MATRIX43PC4QUAT(Rec *p, float *q)
{
    float zero;

    Quat_ConvertToMatrixInternal__H1Z8MATRIX43_PX01PC4QUAT_v((float *)p, q);
    zero = 0.0f;
    p->f2C = zero;
    p->f28 = zero;
    p->f24 = zero;
}
