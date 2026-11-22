/* GCSUTIL_FindNearestPoint__FP21GCS_CurveInterpolatorPC9GCS_CurvePC4VEC3 -- 276 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Finds the item whose clamped projection leaves the smallest squared
 * distance.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_12FFA0.c.
 */

struct Item {
    float px, py, pz;
    float nx, ny, nz;
    char pad18[0x14];
    float r;
    char pad30[8];
};
struct List {
    struct Item *items;
    int count;
};
struct Vec3 {
    float x, y, z;
};
struct Out {
    int index;
    float t;
};

void GCSUTIL_FindNearestPoint__FP21GCS_CurveInterpolatorPC9GCS_CurvePC4VEC3(struct Out *out, struct List *list, struct Vec3 *p)
{
    struct Item *base = list->items;
    struct Item *it = base;
    struct Item *last = base + list->count - 1;
    struct Item *best;
    float bestT;
    float bestD = 1e30f;
    float px = p->x;
    float py = p->y;
    float pz = p->z;
    for (; it != last; it++) {
        float dx = px - it->px;
        float dy = py - it->py;
        float dz = pz - it->pz;
        float dot = it->nx * dx + it->ny * dy + it->nz * dz;
        float r2 = it->r + it->r;
        float s;
        float ex;
        float ey;
        float ez;
        float d2;
        dot = dot + __builtin_fabsf(dot);
        s = (dot + r2 - __builtin_fabsf(r2 - dot)) * 0.25f;
        ex = dx - s * it->nx;
        ey = dy - s * it->ny;
        ez = dz - s * it->nz;
        d2 = ex * ex + ey * ey + ez * ez;
        if (d2 < bestD) {
            bestD = d2;
            bestT = s;
            best = it;
        }
    }
    out->index = best - base;
    out->t = bestT;
}
