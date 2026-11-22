/* MatrixMul__FP8MATRIX4317MatrixOpScaleEnumPC7MATRIX4fff -- 136 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scales one row of the caller's matrix by the three float arguments and
 * copies three entries unchanged.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_128F50.c.
 */

typedef struct {
    float f[12];
} Rec;

typedef struct {
    float f[15];
} Src;

void MatrixMul__FP8MATRIX4317MatrixOpScaleEnumPC7MATRIX4fff(Rec *a0, void *a1, Src *a2, float x, float y, float z)
{
    float t0, t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11;

    t0 = x * a2->f[0];
    t1 = x * a2->f[1];
    t2 = x * a2->f[2];
    t3 = y * a2->f[4];
    t4 = y * a2->f[5];
    t5 = y * a2->f[6];
    t6 = z * a2->f[8];
    t7 = z * a2->f[9];
    t8 = z * a2->f[10];
    t9 = a2->f[12];
    t10 = a2->f[13];
    t11 = a2->f[14];

    a0->f[0] = t0;
    a0->f[1] = t1;
    a0->f[2] = t2;
    a0->f[3] = t3;
    a0->f[4] = t4;
    a0->f[5] = t5;
    a0->f[6] = t6;
    a0->f[7] = t7;
    a0->f[8] = t8;
    a0->f[9] = t9;
    a0->f[10] = t10;
    a0->f[11] = t11;
}
