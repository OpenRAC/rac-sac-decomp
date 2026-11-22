/* MatrixMul__FP8MATRIX4317MatrixOpScaleEnumPC8MATRIX43fff -- 136 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Writes the caller's scaled vector into the record: three floats scaled by
 * the first factor, three by the second, three by the third and the last three
 * copied unchanged.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_128EC8.c.
 */

typedef struct {
    float f[12];
} Vec;

void MatrixMul__FP8MATRIX4317MatrixOpScaleEnumPC8MATRIX43fff(Vec *a0, void *a1, Vec *a2, float f12, float f13, float f14)
{
    float v0 = a2->f[0];
    float v1 = a2->f[1];
    float v2 = a2->f[2];
    float v3 = a2->f[3];
    float v4 = a2->f[4];
    float v5 = a2->f[5];
    float v6 = a2->f[6];
    float v7 = a2->f[7];
    float v8 = a2->f[8];
    float v9 = a2->f[9];
    float v10 = a2->f[10];
    float v11 = a2->f[11];

    a0->f[0] = f12 * v0;
    a0->f[1] = f12 * v1;
    a0->f[2] = f12 * v2;
    a0->f[3] = f13 * v3;
    a0->f[4] = f13 * v4;
    a0->f[5] = f13 * v5;
    a0->f[6] = f14 * v6;
    a0->f[7] = f14 * v7;
    a0->f[8] = f14 * v8;
    a0->f[9] = v9;
    a0->f[10] = v10;
    a0->f[11] = v11;
}
