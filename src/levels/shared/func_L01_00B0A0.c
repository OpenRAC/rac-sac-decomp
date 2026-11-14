/* func_L01_00B0A0 -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Takes an input vector, an output vector, a matrix and three floats. The
 * three floats arrive in the float argument registers and are passed unchanged
 * to func_00AF38; that six-parameter form is what gives the retail register
 * assignment (in, out and matrix kept in callee-saved registers). The result
 * of the transform chain (a 3x3 matrix times vector product, VEC_MulMat3Vec3)
 * is added component by component to the source vector.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct MATRIX3 {
    float m[9];
} MATRIX3;

extern void func_L01_00AF38(VEC3 *out, float a, float b, float c);

extern void VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(VEC3 *out,
                                                       const MATRIX3 *m,
                                                       const VEC3 *v);

void func_L01_00B0A0(VEC3 *out, const MATRIX3 *m, const VEC3 *in,
                 float a, float b, float c)
{
    VEC3 v;
    VEC3 r;

    func_L01_00AF38(&v, a, b, c);
    VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(&r, m, &v);
    out->x = in->x + r.x;
    out->y = in->y + r.y;
    out->z = in->z + r.z;
}
