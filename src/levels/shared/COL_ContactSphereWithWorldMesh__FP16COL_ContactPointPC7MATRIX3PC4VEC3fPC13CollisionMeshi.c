/* COL_ContactSphereWithWorldMesh__FP16COL_ContactPointPC7MATRIX3PC4VEC3fPC13CollisionMeshi -- 808 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Records the closest hit per axis direction over every entity in a grid
 * region.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_117578.c.
 */

extern float fabsf(float x);
typedef struct {
    char pad0[8];
    int f8;
    char *fC;
    unsigned short *f10;
    unsigned short **f14;
} Grid;

typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    Vec3 v;
    float d;
} Slot;
typedef struct {
    char pad0[0x48];
    unsigned short flags;
} Ent;

extern int COL_GetMeshGridRange__FPiN70PC13CollisionMeshPC4VEC3T9(int *a, int *b, int *c, int *d, int *e, int *f, int *g, int *h, Grid *grid, float *mn, float *mx);
extern int COL_CheckTriSphereClsn__FP4VEC3PC15ColFileTrianglePC4VEC3T2f(Vec3 *out, Ent *e, int f8, float *center, float r);
extern void VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(Vec3 *out, float *m, Vec3 *in);

void COL_ContactSphereWithWorldMesh__FP16COL_ContactPointPC7MATRIX3PC4VEC3fPC13CollisionMeshi(Slot *slots, float *m, float r, float *c, Grid *grid, unsigned mask)
{
    float mnb[3];
    float mx[3];
    float *mn = mnb;
    int i0, i1, istep, j0, j1, jstep, k0, k1;
    int i, j, k, n, idx, q;
    unsigned short *counts;
    unsigned short **lists;
    unsigned short *p;
    Vec3 hit;
    Vec3 d;
    Vec3 dir;
    float ax, ay, az, len2, x, y, z;
    Slot *s;
    Ent *e;
    char *base;
    int f8;

    mn[0] = c[0] - r;
    mn[1] = c[1] - r;
    mn[2] = c[2] - r;
    mx[0] = c[0] + r;
    mx[1] = c[1] + r;
    mx[2] = c[2] + r;
    if (COL_GetMeshGridRange__FPiN70PC13CollisionMeshPC4VEC3T9(&i0, &i1, &istep, &j0, &j1, &jstep, &k0, &k1, grid, mn, mx)) {
        base = grid->fC;
        f8 = grid->f8;
        for (i = i0; i != i1; i += istep) {
            for (j = j0; j != j1; j += jstep) {
                counts = grid->f10 + (i + j);
                lists = grid->f14 + (i + j);
                for (k = k0; k != k1; k++) {
                    n = counts[k];
                    p = lists[k];
                    for (q = 0; q < n; q++) {
                        e = (Ent *)(base + p[q] * 0x4C);
                        if (!(e->flags & mask)) {
                            if (COL_CheckTriSphereClsn__FP4VEC3PC15ColFileTrianglePC4VEC3T2f(&hit, e, f8, c, r)) {
                                d.x = hit.x - c[0];
                                d.y = hit.y - c[1];
                                d.z = hit.z - c[2];
                                VEC_MulMat3Vec3__FP4VEC3PC7MATRIX3PC4VEC3(&dir, m, &d);
                                x = dir.x; y = dir.y; z = dir.z;
                                ax = fabsf(x);
                                ay = fabsf(y);
                                az = fabsf(z);
                                if (ay <= ax && az <= ax) {
                                    idx = x < 0.0f ? 0 : 1;
                                } else if (az <= ay) {
                                    idx = y < 0.0f ? 2 : 3;
                                } else {
                                    idx = z < 0.0f ? 4 : 5;
                                }
                                len2 = dir.x * dir.x + dir.y * dir.y + dir.z * dir.z;
                                s = slots + idx;
                                if (len2 < s->d) {
                                    s->v = dir;
                                    s->d = len2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
