/* VEC_MulMat3Vec2__FP4VEC3PC7MATRIX3PC4VEC2 -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Multiplies the two-component vector by the first two rows of a 3x3 matrix
 * whose row stride is 0x18.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_125BA0.c.
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
} Mat;

typedef struct {
    float f_00;
    float f_04;
} Vec;

typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Out;

void VEC_MulMat3Vec2__FP4VEC3PC7MATRIX3PC4VEC2(Out *a0, Mat *a1, Vec *a2)
{
    a0->f_00 = a2->f_00 * a1->f_00 + a2->f_04 * a1->f_18;
    a0->f_04 = a2->f_00 * a1->f_04 + a2->f_04 * a1->f_1C;
    a0->f_08 = a2->f_00 * a1->f_08 + a2->f_04 * a1->f_20;
}
