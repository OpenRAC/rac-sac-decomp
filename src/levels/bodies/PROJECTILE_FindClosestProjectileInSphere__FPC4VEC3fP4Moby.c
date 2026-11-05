/* PROJECTILE_FindClosestProjectileInSphere__FPC4VEC3fP4Moby -- LEVEL13.REL 0x0012DDA8, 368 bytes.
 *
 * Body translated from the retail module.
 *
 * Evidence:
 *   Walk every tracked MobyType instance array (stride 0x80), keep the
 *   projectile inside the sphere whose squared distance to `pos` is
 *   smallest.  Sentinel 1e30f.  Filter at 0x12E048.
 *   Preuve : gnu-ee-20261015-gprfirst:-O2 -G0  (cadre 8 octets, GPR avant FP).
 *
 * Placement: module-relative offset of the disc module; the other
 * placements of the same body are listed in config/levels/bodies.tsv.
 * Proof: the pinned chain (gnu-ee-20261015-gprfirst:-O2 -G0) compiles this source to the
 * retail bytes of that placement, byte for byte.  The program-level
 * gate is still pending, so the body is proved, not promoted.
 * The layout of the structures is the one this body reads; it is not
 * confirmed by the data of the disc yet.
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
extern int func_12E048(Moby *moby, Moby *ignore);

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

            if (func_12E048(p, ignore)) {
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
