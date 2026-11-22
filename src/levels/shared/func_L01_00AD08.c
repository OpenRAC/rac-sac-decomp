/* func_L01_00AD08 -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_001D70.c.
 */

extern void CAMDRIVER_PolarToCart__FP4VEC3ffff(float *out, float a, float b, float c, float d);
extern void VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(long long, long long, float *);

void func_L01_00AD08(long long first, long long second, float a, float b, float c, float d)
{
    float scratch[4];
    CAMDRIVER_PolarToCart__FP4VEC3ffff(scratch, a, b, c, d);
    VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(first, second, scratch);
}
