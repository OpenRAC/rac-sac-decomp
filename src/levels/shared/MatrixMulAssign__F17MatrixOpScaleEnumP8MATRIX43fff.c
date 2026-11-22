/* MatrixMulAssign__F17MatrixOpScaleEnumP8MATRIX43fff -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scales a 3x3 block of floats by three factors.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_128FD8.c.
 */

typedef struct {
    float e[9];
} Rec;

void MatrixMulAssign__F17MatrixOpScaleEnumP8MATRIX43fff(int flag, Rec *v, float m0, float m1, float m2)
{
    v->e[0] = m0 * v->e[0];
    v->e[1] = m0 * v->e[1];
    v->e[2] = m0 * v->e[2];
    v->e[3] = m1 * v->e[3];
    v->e[4] = m1 * v->e[4];
    v->e[5] = m1 * v->e[5];
    v->e[6] = m2 * v->e[6];
    v->e[7] = m2 * v->e[7];
    v->e[8] = m2 * v->e[8];
}
