/* MatrixMul__FP8MATRIX43PC8MATRIX4317MatrixOpScaleEnumfff -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scale each of the twelve floats of a block by one of three factors, the
 * factor cycling every three elements.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_22_0FFB18.c.
 */

typedef struct {
    float v[12];
} Block;

void MatrixMul__FP8MATRIX43PC8MATRIX4317MatrixOpScaleEnumfff(Block *dst, Block *src, float m0, float m1, float m2)
{
    float t0 = src->v[0] * m0;
    float t1 = src->v[1] * m1;
    float t2 = src->v[2] * m2;
    float t3 = src->v[3] * m0;
    float t4 = src->v[4] * m1;
    float t5 = src->v[5] * m2;
    float t6 = src->v[6] * m0;
    float t7 = src->v[7] * m1;
    float t8 = src->v[8] * m2;
    float t9 = src->v[9] * m0;
    float t10 = src->v[10] * m1;
    float t11 = src->v[11] * m2;

    dst->v[0] = t0;
    dst->v[1] = t1;
    dst->v[2] = t2;
    dst->v[3] = t3;
    dst->v[4] = t4;
    dst->v[5] = t5;
    dst->v[6] = t6;
    dst->v[7] = t7;
    dst->v[8] = t8;
    dst->v[9] = t9;
    dst->v[10] = t10;
    dst->v[11] = t11;
}
