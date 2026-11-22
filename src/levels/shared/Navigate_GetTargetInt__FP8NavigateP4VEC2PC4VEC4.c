/* Navigate_GetTargetInt__FP8NavigateP4VEC2PC4VEC4 -- 444 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clamps a movement segment against the wall edge it crosses and returns
 * whether it passed freely.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_02F968.c.
 */

typedef struct Edge {
    float x0;
    float pad_04;
    float z0;
    float pad_0C;
    float x1;
    float pad_14;
    float z1;
} Edge;

typedef struct Wall {
    char pad_00[4];
    Edge *edge;
} Wall;

typedef struct Seg {
    float x;
    float z;
    char pad_08[0x0C];
    Wall *wall;
} Seg;

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef float Fvec[4] __attribute__((aligned(16)));

extern float COL_RayIntersection__FRC4VEC2N30(float *origin, float *dir, Seg *seg, float *delta);

static __inline__ void EdgeDir(float *dir, float *normal, Edge *e)
{
    dir[0] = e->x1 - e->x0;
    dir[1] = e->z1 - e->z0;
    normal[1] = -dir[0];
    normal[0] = dir[1];
}

static __inline__ void Rel(float *out, float x, float z, Edge *e)
{
    out[0] = x - e->x0;
    out[1] = z - e->z0;
}

static __inline__ void Org(float *out, Edge *e)
{
    out[0] = e->x0;
    out[1] = e->z0;
}

static __inline__ void Along(float *out, Edge *e, float *dir, float t)
{
    out[0] = e->x0 + dir[0] * t;
    out[1] = e->z0 + dir[1] * t;
}

static __inline__ float *Clamp(float *v, float *lo, float *hi)
{
    if (*v < *lo) {
        return lo;
    }
    if (*hi < *v) {
        return hi;
    }
    return v;
}

int Navigate_GetTargetInt__FP8NavigateP4VEC2PC4VEC4(Seg *seg, float *out, Vec3 *p1)
{
    Fvec dir;
    Fvec normal;
    Fvec rel1;
    Fvec rel0;
    Fvec origin;
    Fvec delta;
    float rt;
    float rlo;
    float rhi;
    Wall *wall;
    float t;
    float d1;
    float d0;
    float *tp;
    unsigned char side1;
    unsigned char side0;
    unsigned char cross;

    wall = seg->wall;
    if (wall != 0) {
        EdgeDir(dir, normal, wall->edge);
        Rel(rel1, p1->x, p1->z, wall->edge);
        Rel(rel0, seg->x, seg->z, wall->edge);
        d1 = rel1[0] * normal[0] + rel1[1] * normal[1];
        d0 = rel0[0] * normal[0] + rel0[1] * normal[1];
        side1 = 0.0f < d1;
        side0 = 0.0f < d0;
        cross = side1 ^ side0;
        if (cross) {
            Org(origin, wall->edge);
            delta[0] = p1->x - seg->x;
            delta[1] = p1->z - seg->z;
            rt = COL_RayIntersection__FRC4VEC2N30(origin, dir, seg, delta);
            rlo = 0.0f;
            rhi = 1.0f;
            tp = Clamp(&rt, &rlo, &rhi);
            t = *tp;
            Along(out, wall->edge, dir, t);
            return 0;
        }
    }
    out[0] = seg->x;
    out[1] = seg->z;
    return 1;
}
