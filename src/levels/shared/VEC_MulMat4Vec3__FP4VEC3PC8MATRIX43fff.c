/* VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43fff -- 136 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Writes the matrix applied to a point, plus the matrix's translation, to the
 * output vector.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126078.c.
 */

void VEC_MulMat4Vec3__FP4VEC3PC8MATRIX43fff(float *out, float *m, float x, float y, float z)
{
    float r0, r1, r2;

    r0 = x * m[0];
    r1 = x * m[1];
    r2 = x * m[2];
    r0 = r0 + y * m[3];
    r1 = r1 + y * m[4];
    r2 = r2 + y * m[5];
    r0 = r0 + z * m[6];
    r1 = r1 + z * m[7];
    r2 = r2 + z * m[8];
    r0 = r0 + m[9];
    r1 = r1 + m[10];
    r2 = r2 + m[11];
    out[0] = r0;
    out[2] = r2;
    out[1] = r1;
}
