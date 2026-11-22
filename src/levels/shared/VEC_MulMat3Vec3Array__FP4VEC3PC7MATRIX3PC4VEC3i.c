/* VEC_MulMat3Vec3Array__FP4VEC3PC7MATRIX3PC4VEC3i -- 148 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Transform a run of vectors by a 3x3 matrix.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_125CA8.c.
 */

typedef struct {
    float m[9];
} Mat3;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

void VEC_MulMat3Vec3Array__FP4VEC3PC7MATRIX3PC4VEC3i(Vec3 *dst, Mat3 *mat, Vec3 *v, int n)
{
    int i;
    float m0 = mat->m[0];
    float m1 = mat->m[1];
    float m2 = mat->m[2];
    float m3 = mat->m[3];
    float m4 = mat->m[4];
    float m5 = mat->m[5];
    float m6 = mat->m[6];
    float m7 = mat->m[7];
    float m8 = mat->m[8];

    for (i = 0; i < n; i++) {
        float px0 = v->x * m0;
        float px1 = v->y * m3;
        float px2 = v->z * m6;
        float py0 = v->x * m1;
        float py1 = v->y * m4;
        float py2 = v->z * m7;
        float pz0 = v->x * m2;
        float pz1 = v->y * m5;
        float pz2 = v->z * m8;

        dst->x = px0 + px1 + px2;
        dst->y = py0 + py1 + py2;
        dst->z = pz0 + pz1 + pz2;
        v++;
        dst++;
    }
}
