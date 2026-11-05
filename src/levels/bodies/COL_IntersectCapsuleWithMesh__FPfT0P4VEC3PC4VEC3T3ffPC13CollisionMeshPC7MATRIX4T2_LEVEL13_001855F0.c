/* COL_IntersectCapsuleWithMesh__FPfT0P4VEC3PC4VEC3T3ffPC13CollisionMeshPC7MATRIX4T2_LEVEL13_001855F0 -- LEVEL13.REL 0x001855F0, 88 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   Public envelope of COL_IntersectCapsuleWithMeshInternal: 16-byte
 *   local, arguments shifted by one, boolean return.
 *   The two "ff" register arguments of the retail name are copied
 *   raw into t2/t3 of the internal; EE-GCC 2.9 drops a float placed
 *   past the first four registers, so they are unsigned int here.
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (sdk991111-sdkas:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
 */

typedef struct {
    float v[4];
} VEC4;

typedef struct {
    float x, y, z;
} VEC3;

typedef struct CollisionMesh CollisionMesh;
typedef struct MATRIX4 MATRIX4;

extern int COL_IntersectCapsuleWithMeshInternal__FPfN20P4VEC3PC4VEC3T4ffPC13CollisionMeshPC7MATRIX4T3(
    VEC4 *tmp, float *r0, float *r1, VEC3 *v0, const VEC3 *v1,
    const VEC3 *v2, unsigned int t0, unsigned int t1,
    const CollisionMesh *mesh);

int COL_IntersectCapsuleWithMesh__FPfT0P4VEC3PC4VEC3T3ffPC13CollisionMeshPC7MATRIX4T2(
    float *r0, float *r1, VEC3 *v0, const VEC3 *v1, const VEC3 *v2,
    unsigned int t0, unsigned int t1, const CollisionMesh *mesh,
    const MATRIX4 *mat, VEC3 *out)
{
    VEC4 tmp;

    (void)mat;
    (void)out;
    return COL_IntersectCapsuleWithMeshInternal__FPfN20P4VEC3PC4VEC3T4ffPC13CollisionMeshPC7MATRIX4T3(
               &tmp, r0, r1, v0, v1, v2, t0, t1, mesh) != 0;
}
