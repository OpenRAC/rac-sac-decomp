/* ShockBoltData_Update__FUiP4VEC3 -- 264 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Per-frame update of a timed effect object.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_16B070.c.
 */

typedef struct {
    char pad[0x64];
    unsigned flags;
} Tgt;
typedef struct {
    int h;
    int w4;
    char pad0[0x44 - 8];
    Tgt *tgt;
    float pos[3];
    float d[3];
    float f60;
    char pad1[4];
    int state;
} Obj;
extern Obj *ShockBoltData_GetPointer__FUi(int a);
extern void ShockBoltData_Free__FUi(int h);
extern void MOBY_GetMobyTargetPos__FPC4MobyP4VEC3bT2(Tgt *t, float *p, int a, int b);
extern void Electric_Update__FP13Electric_Data(int *p);

void ShockBoltData_Update__FUiP4VEC3(int a, float *v)
{
    Obj *o = ShockBoltData_GetPointer__FUi(a);
    float *d;
    float *p;
    if (o == 0)
        return;
    o->f60 = o->f60 - 1.0f;
    if (o->f60 <= 0.0f) {
        ShockBoltData_Free__FUi(o->h);
        return;
    }
    if (o->state != 2) {
        if (o->state == 3 && o->tgt != 0) {
            if ((o->tgt->flags & 6) != 0)
                o->tgt = 0;
            else
                MOBY_GetMobyTargetPos__FPC4MobyP4VEC3bT2(o->tgt, o->pos, 0, 0);
        }
    } else {
        d = o->d;
        p = o->pos;
        p[0] = v[0] + d[0];
        p[1] = v[1] + d[1];
        p[2] = v[2] + d[2];
    }
    if (o->state != 0)
        Electric_Update__FP13Electric_Data(&o->w4);
}
