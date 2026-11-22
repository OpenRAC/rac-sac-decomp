/* GetLocalToLineMatrix__FP8MATRIX43PC8MATRIX43PC4VEC3T2 -- 180 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Builds a 4x3 basis from a direction and a position, converts it to a local
 * matrix and forwards that to a helper.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0E2708.c.
 */

void VEC_LookAtUpLeft__FP4VEC3T0PC4VEC3(float *a0, float *a1, float *a2);
void VEC_InvertMat4x3__FP8MATRIX43PC8MATRIX4319HintOrthonormalEnum(float *a0, float *a1, int a2);
void MatrixMul__FP8MATRIX43PC8MATRIX43T1(char *a0, char *a1, float *a2);

void GetLocalToLineMatrix__FP8MATRIX43PC8MATRIX43PC4VEC3T2(char *a0, char *a1, float *a2, float *a3)
{
    float basis[12];
    float out[12];
    float *dir;

    VEC_LookAtUpLeft__FP4VEC3T0PC4VEC3(basis, basis + 3, a3);
    dir = basis + 6;
    dir[0] = a3[0];
    dir[1] = a3[1];
    dir[2] = a3[2];
    basis[9] = a2[0];
    basis[10] = a2[1];
    basis[11] = a2[2];
    VEC_InvertMat4x3__FP8MATRIX43PC8MATRIX4319HintOrthonormalEnum(out, basis, 0);
    MatrixMul__FP8MATRIX43PC8MATRIX43T1(a0, a1, out);
}
