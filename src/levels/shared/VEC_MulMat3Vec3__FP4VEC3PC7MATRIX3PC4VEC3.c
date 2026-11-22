/* VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3 -- 156 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Matrix * vector, result written to the first argument.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

void VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(V3 *out, float *m, V3 *v)
{
    V3 r;

    r.x = v->x * m[0] + v->y * m[3] + v->z * m[6];
    r.y = v->x * m[1] + v->y * m[4] + v->z * m[7];
    r.z = v->x * m[2] + v->y * m[5] + v->z * m[8];
    *out = r;
}
