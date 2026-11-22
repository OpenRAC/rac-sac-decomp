/* CameraHint_ShouldActivate__FP4Moby -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Decides whether the attached actor counts as active, using a helper check
 * and two flag tests.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/05_medical_outpost/LEVEL_05_152218.c.
 */

typedef struct Ent152218 {
    unsigned char pad_00[0x45];
    unsigned char b_45;
    unsigned char pad_46[0x64 - 0x46];
    int w_64;
} Ent152218;

typedef struct X152218 {
    Ent152218 *p_00;
    Ent152218 *s1_04;
    void *p_08;
    unsigned char pad_0C[0x1C - 0x0C];
    signed char c_1C;
    unsigned char pad_1D[0x24 - 0x1D];
    unsigned char b_24;
    unsigned char b_25;
} X152218;

typedef struct Obj152218 {
    unsigned char pad_00[0x54];
    X152218 *f_54;
} Obj152218;

extern int TRIGGER_CheckPointInside__FPC7TriggerPC4VEC3(void *a, void *b);

int CameraHint_ShouldActivate__FP4Moby(Obj152218 *o) {
    X152218 *x;
    Ent152218 *s;

    x = o->f_54;
    if (x->b_25 != 0) {
        if ((x->p_00->w_64 & 8) != 0) {
            return 0;
        }
    }
    s = x->s1_04;
    if (x->p_08 != 0) {
        if (TRIGGER_CheckPointInside__FPC7TriggerPC4VEC3(x->p_08, (unsigned char *)s + 0x30)) {
            return 1;
        }
    }
    if (s->b_45 == x->c_1C) {
        return 1;
    }
    if (x->b_24 != 0 && (s->w_64 & 0xE) != 0) {
        return 1;
    }
    return 0;
}
