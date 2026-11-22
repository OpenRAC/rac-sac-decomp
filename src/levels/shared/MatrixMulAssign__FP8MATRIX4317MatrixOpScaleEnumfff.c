/* MatrixMulAssign__FP8MATRIX4317MatrixOpScaleEnumfff -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scales a 12-float block by three repeating factors.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0ECB58.c.
 */

typedef struct {
    float e[12];
} Rec;

void MatrixMulAssign__FP8MATRIX4317MatrixOpScaleEnumfff(Rec *v, float a, float b, float c)
{
    v->e[0] = v->e[0] * a;
    v->e[1] = v->e[1] * b;
    v->e[2] = v->e[2] * c;
    v->e[3] = v->e[3] * a;
    v->e[4] = v->e[4] * b;
    v->e[5] = v->e[5] * c;
    v->e[6] = v->e[6] * a;
    v->e[7] = v->e[7] * b;
    v->e[8] = v->e[8] * c;
    v->e[9] = v->e[9] * a;
    v->e[10] = v->e[10] * b;
    v->e[11] = v->e[11] * c;
}
