/* COL_IntersectSweptSphereWithMesh__FPfP4VEC3P17PackedSurfaceInfoPC4VEC3T3ffPC13CollisionMeshPC7MATRIX4T1_LEVEL13_00185DB0 -- LEVEL13.REL 0x00185DB0, 88 bytes.
 *
 * Body translated from the retail module.
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

typedef struct PackedSurfaceInfo PackedSurfaceInfo;
typedef struct CollisionMesh CollisionMesh;
typedef struct MATRIX4 MATRIX4;

extern int COL_IntersectSweptSphereWithMeshInternal__FPfT0P4VEC3P17PackedSurfaceInfoPC4VEC3T4ffPC13CollisionMeshPC7MATRIX4T2(
    VEC4 *tmp, float *r0, VEC3 *v0, PackedSurfaceInfo *si,
    const VEC3 *v1, const VEC3 *v2, unsigned int t0, unsigned int t1,
    const CollisionMesh *mesh);

int COL_IntersectSweptSphereWithMesh__FPfP4VEC3P17PackedSurfaceInfoPC4VEC3T3ffPC13CollisionMeshPC7MATRIX4T1(
    float *r0, VEC3 *v0, PackedSurfaceInfo *si, const VEC3 *v1,
    const VEC3 *v2, unsigned int t0, unsigned int t1,
    const CollisionMesh *mesh, const MATRIX4 *mat, VEC3 *out)
{
    VEC4 tmp;

    (void)mat;
    (void)out;
    return COL_IntersectSweptSphereWithMeshInternal__FPfT0P4VEC3P17PackedSurfaceInfoPC4VEC3T4ffPC13CollisionMeshPC7MATRIX4T2(
               &tmp, r0, v0, si, v1, v2, t0, t1, mesh) != 0;
}
