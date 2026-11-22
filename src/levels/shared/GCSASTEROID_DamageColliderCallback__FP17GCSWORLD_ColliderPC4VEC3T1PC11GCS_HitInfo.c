/* GCSASTEROID_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Counts the record's timer down by the step value (clamped at zero), or sets
 * it to -1 when the mode is 3; ignores records with the sentinel or an expired
 * timer.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0F9190.c.
 */

typedef struct Q { int w0; float f4; } Q;
typedef struct Obj { char pad00[0x44]; float f44; } Obj;
static __inline__ float *MaxP(float *a, float *b) { return *a > *b ? a : b; }
void GCSASTEROID_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo(char *p, int a1, int a2, Q *q)
{
    Obj *o = (Obj *)(p - 0x50);
    float t = o->f44;
    float m;
    float z;
    if (t == 1e30f) return;
    if (t <= 0.0f) return;
    if (q->w0 == 3) { o->f44 = -1.0f; return; }
    z = 0.0f;
    m = t - q->f4;
    o->f44 = *MaxP(&m, &z);
}
