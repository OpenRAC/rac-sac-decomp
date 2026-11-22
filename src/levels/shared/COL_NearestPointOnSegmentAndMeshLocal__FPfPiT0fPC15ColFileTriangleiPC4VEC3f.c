/* COL_NearestPointOnSegmentAndMeshLocal__FPfPiT0fPC15ColFileTriangleiPC4VEC3f -- 396 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Scans an array of 0x4C-byte triangle records for the one closest to a query
 * point and returns that distance, with the hit position and record index.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_116D90.c.
 */

typedef struct Tri {
    unsigned short i0;
    unsigned short i1;
    unsigned short i2;
    char pad_06[0x4C - 6];
} Tri;

extern float NearestPointOnSegmentAndTriangleLocal__FPfT0fPC4VEC3N23f(float *hit, float *pos, float a, float b, float *v0, float *v1, float *v2);

float COL_NearestPointOnSegmentAndMeshLocal__FPfPiT0fPC15ColFileTriangleiPC4VEC3f(float *out, int *index, float *outPos, Tri *tris, int count, float *verts, float a, float b)
{
    float hit[1];
    float pos[3];
    float p2;
    float h0, p1, p0;
    float best;
    Tri *t;
    Tri *end;
    Tri *found;

    best = 1e30f;
    end = tris + count;
    for (t = tris; t != end; t++) {
        float d;

        d = NearestPointOnSegmentAndTriangleLocal__FPfT0fPC4VEC3N23f(hit, pos, a, b, verts + t->i0 * 3, verts + t->i1 * 3, verts + t->i2 * 3);
        if (d < best) {
            h0 = hit[0];
            best = d;
            p0 = pos[0];
            found = t;
            p1 = pos[1];
            p2 = pos[2];
        }
    }
    if (best != 1e30f) {
        *out = h0;
        *index = found - tris;
        outPos[0] = p0;
        outPos[1] = p1;
        outPos[2] = p2;
    }
    return best;
}
