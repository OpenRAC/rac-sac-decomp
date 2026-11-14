/* PROJECTILE_FindClosestProjectileInSphere__FPC4VEC3fP4Moby -- 368 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Walks every tracked MobyType instance array (stride 0x80) and keeps the
 * projectile inside the sphere whose squared distance to `pos` is smallest.
 * The initial best distance is the sentinel 1e30f.
 */

typedef struct {
    float x, y, z;
} VEC3;

typedef struct Moby {
    unsigned char pad0[0x30];
    VEC3 pos;
    unsigned char pad1[0x80 - 0x3C];
} Moby;

typedef struct TrackedType {
    unsigned char pad0[0x0C];
    Moby *instances;
    unsigned char pad1[0x3C - 0x10];
    unsigned int count;
} TrackedType;

extern unsigned int g_trackedCount;
extern TrackedType *g_trackedTable[];
extern int func_L13_12E048(Moby *moby, Moby *ignore);

Moby *PROJECTILE_FindClosestProjectileInSphere__FPC4VEC3fP4Moby(
    const VEC3 *pos, float radius, Moby *ignore)
{
    float radius2;
    float best;
    Moby *found;
    unsigned int i;

    radius2 = radius * radius;
    best = 1.0e30f;
    found = 0;

    for (i = 0; i < g_trackedCount; i++) {
        TrackedType *type;
        Moby *instances;
        Moby *p;
        Moby *end;
        VEC3 *mpos;

        type = g_trackedTable[i];
        instances = type->instances;
        end = instances + type->count;
        p = instances;
        if (p == end)
            continue;
        mpos = &p->pos;
        do {
            float dx, dy, dz, d2;

            if (func_L13_12E048(p, ignore)) {
                dx = mpos->x - pos->x;
                dy = mpos->y - pos->y;
                dz = mpos->z - pos->z;
                d2 = dx * dx + dy * dy + dz * dz;
                if (d2 <= radius2) {
                    if (d2 < best) {
                        best = d2;
                        found = p;
                    }
                }
            }
            p = p + 1;
            mpos = (VEC3 *)((char *)mpos + 0x80);
        } while (p != end);
    }
    return found;
}
