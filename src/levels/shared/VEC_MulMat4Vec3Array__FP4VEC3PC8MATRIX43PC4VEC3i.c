/* VEC_MulMat4Vec3Array__FP4VEC3PC8MATRIX43PC4VEC3i -- 176 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0EAD10.c.
 */

typedef struct { float x, y, z; } Vec3;

void VEC_MulMat4Vec3Array__FP4VEC3PC8MATRIX43PC4VEC3i(Vec3 *out, float *m, Vec3 *v, int n)
{
    float m0 = m[0], m1 = m[1], m2 = m[2], m3 = m[3];
    float m4 = m[4], m5 = m[5], m6 = m[6], m7 = m[7];
    float m8 = m[8], m9 = m[9], m10 = m[10], m11 = m[11];

    if (n <= 0)
        return;
    do
    {
        float x = v->x;
        float y = v->y;
        float z = v->z;

        out->x = x * m0 + y * m3 + z * m6 + m9;
        out->y = x * m1 + y * m4 + z * m7 + m10;
        out->z = x * m2 + y * m5 + z * m8 + m11;
        out++;
        v++;
    } while (--n);
}
