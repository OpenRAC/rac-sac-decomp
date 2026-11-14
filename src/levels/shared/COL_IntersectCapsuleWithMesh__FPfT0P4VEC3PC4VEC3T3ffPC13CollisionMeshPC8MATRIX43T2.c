/* COL_IntersectCapsuleWithMesh__FPfT0P4VEC3PC4VEC3T3ffPC13CollisionMeshPC8MATRIX43T2 -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct {
    float v[4];
} VEC4;

typedef struct {
    float x, y, z;
} VEC3;

typedef struct CollisionMesh CollisionMesh;
typedef struct MATRIX43 MATRIX43;

extern int COL_IntersectCapsuleWithMeshInternal__FPfN20P4VEC3PC4VEC3T4ffPC13CollisionMeshPC8MATRIX43T3(
    VEC4 *tmp, float *r0, float *r1, VEC3 *v0, const VEC3 *v1,
    const VEC3 *v2, unsigned int t0, unsigned int t1,
    const CollisionMesh *mesh);

int COL_IntersectCapsuleWithMesh__FPfT0P4VEC3PC4VEC3T3ffPC13CollisionMeshPC8MATRIX43T2(
    float *r0, float *r1, VEC3 *v0, const VEC3 *v1, const VEC3 *v2,
    unsigned int t0, unsigned int t1, const CollisionMesh *mesh,
    const MATRIX43 *mat, VEC3 *out)
{
    VEC4 tmp;

    (void)mat;
    (void)out;
    return COL_IntersectCapsuleWithMeshInternal__FPfN20P4VEC3PC4VEC3T4ffPC13CollisionMeshPC8MATRIX43T3(
               &tmp, r0, r1, v0, v1, v2, t0, t1, mesh) != 0;
}
