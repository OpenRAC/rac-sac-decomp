/* VEC_MulMat4Vec3ZeroW__FP4VEC3PC7MATRIX4PC4VEC3 -- 156 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Matrix/vector product: the result vector is built on the stack and copied
 * out in one block.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/VEC_MulMat4Vec3ZeroW__FP4VEC3PC7MATRIX4PC4VEC3.c.
 */

typedef struct {
    float v[3];
} Vec3;

typedef struct {
    float m[3][4];
} Mat3;

void VEC_MulMat4Vec3ZeroW__FP4VEC3PC7MATRIX4PC4VEC3(Vec3 *out, Mat3 *a, Vec3 *b)
{
    Vec3 r;

    r.v[0] = b->v[0] * a->m[0][0] + b->v[1] * a->m[1][0]
           + b->v[2] * a->m[2][0];
    r.v[1] = b->v[0] * a->m[0][1] + b->v[1] * a->m[1][1]
           + b->v[2] * a->m[2][1];
    r.v[2] = b->v[0] * a->m[0][2] + b->v[1] * a->m[1][2]
           + b->v[2] * a->m[2][2];
    *out = r;
}
