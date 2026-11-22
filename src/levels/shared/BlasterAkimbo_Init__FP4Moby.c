/* BlasterAkimbo_Init__FP4Moby -- 132 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resets the attached record, raises a flag bit, restarts two helpers and
 * plays a one-shot sequence; returns 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1486A0.c.
 */

typedef struct {
    int f0;
    int f4;
    char pad8[0x2C - 8];
    char f2c[4];
} State;

typedef struct {
    char pad0[0x46];
    unsigned char b46;
} Tail;

typedef struct {
    char pad0[0x58];
    State *state;
    char pad5c[0x64 - 0x5C];
    unsigned int flags;
} Obj;

extern void BlasterShared_InitBlasterGlow__FP15BlasterGlowVars(char *object);
extern void BlasterShared_InitLight__FP16BlasterLightVars(void *p);
extern void MOBY_BlendMobyAnim__FP4MobyUifbT3f(void *obj, int id, int a, int b, float f, float g);

int BlasterAkimbo_Init__FP4Moby(Obj *o)
{
    State *s = o->state;

    s->f0 = 0;
    o->flags |= 0x40000;
    BlasterShared_InitBlasterGlow__FP15BlasterGlowVars(s->f2c);
    BlasterShared_InitLight__FP16BlasterLightVars((char *)s + 8);
    s->f4 = 1;
    MOBY_BlendMobyAnim__FP4MobyUifbT3f(o, 1, 0, 1, 0.1f, 0.0f);
    ((Tail *)o)->b46 = 0;
    return 1;
}
