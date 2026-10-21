/* LEVEL11_00B120 -- LEVEL11.REL 0x00B120, 128 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   par une matrice 4x4 (w = 0) et l'ajoute a un vecteur entrant.
 *   Meme forme que 0x00B0A0, avec VEC_MulMat4Vec3ZeroW__FP4VEC3PC7MATRIX4PC4VEC3
 *   (0x1C5650) au lieu de VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3 (0x1C5518).
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

typedef struct VEC3 {
    float x;
    float y;
    float z;
} VEC3;

typedef struct MATRIX4 {
    float m[16];
} MATRIX4;

extern void func_00AF38(VEC3 *out, float a, float b, float c);

extern void VEC_MulMat4Vec3ZeroW__FP4VEC3PC7MATRIX4PC4VEC3(VEC3 *out,
                                                             const MATRIX4 *m,
                                                             const VEC3 *v);

void func_00B120(VEC3 *out, const MATRIX4 *m, const VEC3 *in,
                 float a, float b, float c)
{
    VEC3 v;
    VEC3 r;

    func_00AF38(&v, a, b, c);
    VEC_MulMat4Vec3ZeroW__FP4VEC3PC7MATRIX4PC4VEC3(&r, m, &v);
    out->x = in->x + r.x;
    out->y = in->y + r.y;
    out->z = in->z + r.z;
}
