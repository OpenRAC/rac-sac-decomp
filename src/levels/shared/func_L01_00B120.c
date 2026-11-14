/* func_L01_00B120 -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct MATRIX4 {
    float m[16];
} MATRIX4;

extern void func_L01_00AF38(VEC3 *out, float a, float b, float c);

extern void VEC_MulMat4Vec3ZeroW__FP4VEC3PC7MATRIX4PC4VEC3(VEC3 *out,
                                                            const MATRIX4 *m,
                                                            const VEC3 *v);

void func_L01_00B120(VEC3 *out, const MATRIX4 *m, const VEC3 *in,
                 float a, float b, float c)
{
    VEC3 v;
    VEC3 r;

    func_L01_00AF38(&v, a, b, c);
    VEC_MulMat4Vec3ZeroW__FP4VEC3PC7MATRIX4PC4VEC3(&r, m, &v);
    out->x = in->x + r.x;
    out->y = in->y + r.y;
    out->z = in->z + r.z;
}
