/* GCSSHIELD_RefreshConfig__FP28GCSSHIELD_SparkEmitterConfig -- 540 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Computes projected weights and per-channel start/delta values for a color
 * fade.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1294B0.c.
 */

typedef union Col {
    unsigned int w;
    struct {
        unsigned short lo;
        unsigned short hi;
    } h;
} Col;

typedef struct Obj {
    char pad_00[0x14];
    float f_14;
    char pad_18[0x10];
    float f_28;
    float f_2C;
    Col end;
    Col beg;
    char pad_38[0xC];
    float f_44;
    float f_48;
    float f_4C;
    float f_50;
    float f_54;
    float f_58;
    float f_5C;
    float f_60;
    float f_64;
} Obj;

extern void MU_AlphaCurveSetup__FP13MU_AlphaCurveff(float *v, float a, float b);

void GCSSHIELD_RefreshConfig__FP28GCSSHIELD_SparkEmitterConfig(Obj *o)
{
    float v[2];
    float inv;
    unsigned int t;

    inv = 1.0f / o->f_14;
    MU_AlphaCurveSetup__FP13MU_AlphaCurveff(v, o->f_28 * inv, o->f_2C * inv);
    o->f_48 = v[0] * 255.0f;
    o->f_4C = v[1] * 255.0f;
    o->f_44 = -(o->f_48 + o->f_4C);
    t = o->beg.w;
    o->f_50 = (float)(t & 0xFF);
    t = o->end.w;
    o->f_54 = (float)(t & 0xFF) - o->f_50;
    t = o->beg.w;
    o->f_58 = (float)((t >> 8) & 0xFF);
    t = o->end.w;
    o->f_5C = (float)((t >> 8) & 0xFF) - o->f_58;
    t = o->beg.h.hi;
    o->f_60 = (float)(t & 0xFF);
    t = o->end.h.hi;
    o->f_64 = (float)(t & 0xFF) - o->f_60;
}
