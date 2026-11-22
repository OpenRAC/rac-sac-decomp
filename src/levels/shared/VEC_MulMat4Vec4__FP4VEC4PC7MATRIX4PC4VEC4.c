/* VEC_MulMat4Vec4__FP4VEC4PC7MATRIX4PC4VEC4 -- 252 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The game multiplies a 4x4 matrix (stored column by column) by a vector of
 * four floats and leaves the four results in the caller's block. The result
 * block is copied with one unaligned quadword move (ldl/ldr on the read side,
 * sdl/sdr on the write side) per eight bytes: that is the shape of a float
 * block copied as an aggregate.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126100.c.
 */

typedef struct {
    float f[4];
} Vec4;

typedef struct {
    float m[16];
} Matrix;

typedef struct {
    float v[4];
} Vector;

void VEC_MulMat4Vec4__FP4VEC4PC7MATRIX4PC4VEC4(Vec4 *dst, Matrix *mat, Vector *vec)
{
    Vec4 out;

    out.f[0] = vec->v[0] * mat->m[0] + vec->v[1] * mat->m[4]
             + vec->v[2] * mat->m[8] + vec->v[3] * mat->m[12];
    out.f[1] = vec->v[0] * mat->m[1] + vec->v[1] * mat->m[5]
             + vec->v[2] * mat->m[9] + vec->v[3] * mat->m[13];
    out.f[2] = vec->v[0] * mat->m[2] + vec->v[1] * mat->m[6]
             + vec->v[2] * mat->m[10] + vec->v[3] * mat->m[14];
    out.f[3] = vec->v[0] * mat->m[3] + vec->v[1] * mat->m[7]
             + vec->v[2] * mat->m[11] + vec->v[3] * mat->m[15];
    *dst = out;
}
