/* LeftMulRotateAxisZInternal__FP4VEC3T0PC4VEC3T2ff -- 124 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Combines two vectors with two scalars: the first result gets the sums, the
 * second the differences. The two input vectors are read into locals so that
 * every product is computed before the first store.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1293D0.c.
 */

typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec3;

void LeftMulRotateAxisZInternal__FP4VEC3T0PC4VEC3T2ff(Vec3 *a0, Vec3 *a1, Vec3 *a2, Vec3 *a3, float s, float t)
{
    float c0 = a2->f_00;
    float c1 = a2->f_04;
    float c2 = a2->f_08;
    float d0 = a3->f_00;
    float d1 = a3->f_04;
    float d2 = a3->f_08;

    a0->f_00 = t * c0 + s * d0;
    a0->f_04 = t * c1 + s * d1;
    a0->f_08 = t * c2 + s * d2;
    a1->f_00 = t * d0 - s * c0;
    a1->f_04 = t * d1 - s * c1;
    a1->f_08 = t * d2 - s * c2;
}
