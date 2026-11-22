/* GCSBOMBER_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo -- 124 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Decays two timers of the object that precedes the argument by the step, and
 * releases the object when the second runs out.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_100D88.c.
 */

typedef struct {
    char pad[0x230];
    float t230;
    float t234;
} Obj;

typedef struct {
    float f0;
    float step;
} Step;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void GCSBOMBER_Knock__FP15GCSBOMBER_ActorPC4VEC3f(Obj *o, Vec3 *c, float radius);

void GCSBOMBER_DamageColliderCallback__FP17GCSWORLD_ColliderPC4VEC3T1PC11GCS_HitInfo(char *a0, int a1, Vec3 *a2, Step *a3)
{
    Obj *o = (Obj *)(a0 - 0x240);
    float dt;
    float t;

    o->t230 = o->t230 - a3->step;
    dt = a3->step;
    t = o->t234 - dt * 0.3400000035762787f;
    if (t <= 0.0f) {
        GCSBOMBER_Knock__FP15GCSBOMBER_ActorPC4VEC3f(o, a2, dt);
        o->t234 = 0.0f;
    } else {
        o->t234 = t;
    }
}
