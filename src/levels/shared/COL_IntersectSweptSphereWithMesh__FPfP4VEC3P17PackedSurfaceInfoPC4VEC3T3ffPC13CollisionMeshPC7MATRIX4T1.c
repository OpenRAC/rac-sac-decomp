/* COL_IntersectSweptSphereWithMesh__FPfP4VEC3P17PackedSurfaceInfoPC4VEC3T3ffPC13CollisionMeshPC7MATRIX4T1 -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Public wrapper of COL_IntersectSweptSphereWithMeshInternal: it prepares a
 * 16-byte local block, shifts the arguments by one and returns the result as a
 * boolean.
 *
 * The two trailing register arguments of the retail name (the "ff") are passed
 * through raw into the last two argument registers of the internal function,
 * so they are opaque 32-bit values declared as unsigned int here: the EE GCC
 * 2.9 compiler drops a float placed past the first four argument registers.
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
