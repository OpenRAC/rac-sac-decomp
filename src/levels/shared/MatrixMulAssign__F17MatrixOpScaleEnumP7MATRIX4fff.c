/* MatrixMulAssign__F17MatrixOpScaleEnumP7MATRIX4fff -- 112 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scales the three rows of the 3x3 matrix (row stride 0x10) by the three float
 * arguments, in place.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_129048.c.
 */

typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
    float f_24;
    float f_28;
} Mat;

void MatrixMulAssign__F17MatrixOpScaleEnumP7MATRIX4fff(int a0, Mat *a1, float v0, float v1, float v2)
{
    a1->f_00 = v0 * a1->f_00;
    a1->f_04 = v0 * a1->f_04;
    a1->f_08 = v0 * a1->f_08;
    a1->f_10 = v1 * a1->f_10;
    a1->f_14 = v1 * a1->f_14;
    a1->f_18 = v1 * a1->f_18;
    a1->f_20 = v2 * a1->f_20;
    a1->f_24 = v2 * a1->f_24;
    a1->f_28 = v2 * a1->f_28;
}
