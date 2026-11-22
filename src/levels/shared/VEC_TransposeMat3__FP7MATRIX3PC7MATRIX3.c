/* VEC_TransposeMat3__FP7MATRIX3PC7MATRIX3 -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the node's nine live floats into the picture slot, with the three
 * axis pairs swapped as the renderer wants them.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1266E0.c.
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
} Nine;

void VEC_TransposeMat3__FP7MATRIX3PC7MATRIX3(Nine *a0, Nine *a1, int flag)
{
    float s00 = a1->f_00;
    float s04 = a1->f_04;
    float s08 = a1->f_08;
    float s0C = a1->f_0C;
    float s10 = a1->f_10;
    float s14 = a1->f_14;
    float s18 = a1->f_18;
    float s1C = a1->f_1C;
    float s20 = a1->f_20;

    a0->f_00 = s00;
    a0->f_04 = s0C;
    a0->f_08 = s18;
    a0->f_0C = s04;
    a0->f_10 = s10;
    a0->f_14 = s1C;
    a0->f_18 = s08;
    a0->f_1C = s14;
    a0->f_20 = s20;
}
