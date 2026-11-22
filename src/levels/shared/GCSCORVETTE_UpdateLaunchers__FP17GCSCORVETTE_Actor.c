/* GCSCORVETTE_UpdateLaunchers__FP17GCSCORVETTE_Actor -- 312 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * For each of two entries, builds a scaled direction vector and calls the
 * update helper, falling back to the reset helper when it returns zero.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1053D8.c.
 */

struct Ent {
    int w_00;
    char pad_04[0xC];
    int w_10;
};

struct Pair {
    float f_00;
    float f_04;
};

struct Obj {
    char pad_00[0x9C];
    char b_9C[0x18];
    float v_B4[3];
    char pad_C0[0x260 - 0xC0];
    float f_260;
    char pad_264[0x3F8 - 0x264];
    struct Pair t_3F8[2];
    struct Ent e_408[2];
};

struct Rec {
    char pad_00[4];
    char b_04[0xC];
    char b_10[0xC];
};

extern struct Rec D_L24_0025B018[];

static __inline__ void ScaleVec3(float *d, float *s, float k)
{
    d[0] = k * s[0];
    d[1] = k * s[1];
    d[2] = k * s[2];
}

extern int GCSCORVETTE_LauncherSpawn__FP20GCSCORVETTE_LauncherPC14GCS_WaveConfigPC4VEC3N22PC8MATRIX43i(struct Ent *e, int a, float *v, char *p, char *q, char *r, int t);
extern void GCSCORVETTE_CloseLauncher__FP17GCSCORVETTE_Actor18GCSCORVETTE_DoorID(struct Obj *o, int i);

void GCSCORVETTE_UpdateLaunchers__FP17GCSCORVETTE_Actor(struct Obj *o)
{
    float v[3];
    float inv;
    int i;
    struct Rec *r;
    struct Ent *e;
    struct Pair *t;

    r = D_L24_0025B018;
    for (i = 0; i < 2; i++) {
        e = &o->e_408[i];
        t = &o->t_3F8[i];
        if (e->w_00 != 0) {
            if (!(t->f_00 > 0.01f)) {
                inv = 1.0f / o->f_260;
                ScaleVec3(v, o->v_B4, inv);
                if (GCSCORVETTE_LauncherSpawn__FP20GCSCORVETTE_LauncherPC14GCS_WaveConfigPC4VEC3N22PC8MATRIX43i(e, e->w_00, v, r[i].b_04, r[i].b_10, o->b_9C, e->w_10) == 0) {
                    GCSCORVETTE_CloseLauncher__FP17GCSCORVETTE_Actor18GCSCORVETTE_DoorID(o, i);
                }
            }
        }
    }
}
