/* COL_IntersectSweptSphereWithMeshLocal__FPfT0fPC15ColFileTriangleiPC4VEC3 -- 208 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Finds a triangle hit by a test and writes the best distance.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0DB168.c.
 */

struct Tri {
    unsigned short i0, i1, i2;
    char pad[0x46];
};
struct Vec3 {
    float x, y, z;
};
extern int IntersectSweptSphereWithTriangleLocal__FPfT0fPC4VEC3N23(float *p, void *a, struct Vec3 *v0, struct Vec3 *v1, struct Vec3 *v2, float t);

struct Tri *COL_IntersectSweptSphereWithMeshLocal__FPfT0fPC15ColFileTriangleiPC4VEC3(float *out, void *a, struct Tri *tris, int count, struct Vec3 *verts, float best)
{
    struct Tri *end = tris + count;
    struct Tri *hit = 0;
    for (; tris != end; tris++) {
        if (IntersectSweptSphereWithTriangleLocal__FPfT0fPC4VEC3N23(&best, a, verts + tris->i0, verts + tris->i1, verts + tris->i2, best))
            hit = tris;
    }
    if (hit)
        *out = best;
    return hit;
}
