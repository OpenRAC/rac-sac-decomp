/* GCS_WaveCorvetteGrid_RefreshWave__FP4MobyP14GCS_WaveConfig -- 1400 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Decodes a packed effect description into the runtime parameter records.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_138608.c.
 */

#define SRC(off) ((void *)((char *)src + (off)))
#define OUT(p, off) ((float *)((char *)(p) + (off)))
#define IOUT(p, off) ((int *)((char *)(p) + (off)))

typedef struct {
    char pad0[4];
    unsigned int w4;
} Hdr;

typedef struct {
    char pad0[4];
    float *a;
    char pad8[0x20];
    void *slot;
    void *anim;
    char pad30[0x64];
    unsigned int flags94;
} Rec;

extern void GCS_WaveCorvetteGrid_Overridevalue__FP4VEC3T0f(float *dst, void *src, float scale);
extern void GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(float *dst, void *src, float scale);
extern void GCS_WaveCorvetteGrid_Overridevalue__FPiT0(float *dst, void *src);
extern void GCS_WaveCorvetteGrid_Overridevalue__FPbPUc(float *dst, void *src);
extern unsigned int GCS_GetWaveIndex__FP4Moby(void *src);
extern unsigned int GLOBALVARS_IsInReplayMode__Fv(void);
extern void GCSCORVETTE_RefreshEmitter__FP16GCSENEMY_EmitterP18GCSCORVETTE_Config(void *a, void *b);

void GCS_WaveCorvetteGrid_RefreshWave__FP4MobyP14GCS_WaveConfig(void *unused, Rec *r)
{
    char *src;
    float *t;
    float *u;
    float *s2;
    void *slot;
    float sp[12];
    unsigned int k;
    unsigned int v;

    src = *(char **)((char *)unused + 0x54);
    slot = r->slot;
    t = (float *)r->anim;
    u = *(float **)slot;
    s2 = (float *)*(void **)((char *)r + 4);
    GCS_WaveCorvetteGrid_Overridevalue__FP4VEC3T0f(OUT(r, 0x14), SRC(0x1C), 1.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(r, 0x24), SRC(0x8), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x8), SRC(0xC), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FP4VEC3T0f(OUT(r, 0x34), SRC(0x28), -1.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FP4VEC3T0f(OUT(r, 0x54), SRC(0x28), 1.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(r, 0x60), SRC(0x18), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(r, 0x64), SRC(0x10), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(r, 0x70), SRC(0x3C), 0.0174532924f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(r, 0x74), SRC(0x40), 0.0174532924f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(r, 0x78), SRC(0x44), 0.0174532924f);
    GCS_WaveCorvetteGrid_Overridevalue__FP4VEC3T0f(OUT(r, 0x7C), SRC(0x48), 1.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(r, 0x90), SRC(0x14), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPiT0(s2, SRC(0x34));
    GCS_WaveCorvetteGrid_Overridevalue__FPiT0(s2 + 1, SRC(0x38));
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(u + 1, SRC(0x90), 0.0174532924f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(u + 2, SRC(0x94), 0.0174532924f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(u + 3, SRC(0x98), 0.0174532924f);
    GCS_WaveCorvetteGrid_Overridevalue__FP4VEC3T0f(u + 4, SRC(0x84), 1.0f);

    *(int *)&sp[0] = *IOUT(t, 0x60);
    sp[1] = *OUT(t, 0x68);
    sp[2] = *OUT(t, 0x64);
    GCS_WaveCorvetteGrid_Overridevalue__FPiT0(&sp[0], SRC(0x54));
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(&sp[1], SRC(0x58), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(&sp[2], SRC(0x5C), 30.0f);
    *IOUT(t, 0x60) = *(int *)&sp[0];
    *OUT(t, 0x68) = sp[1];
    *OUT(t, 0x64) = sp[2];
    *IOUT(t, 0x6C) = *(int *)&sp[0];
    *OUT(t, 0x74) = sp[1];
    *OUT(t, 0x70) = sp[2] + sp[1] * 0.5f;

    *(int *)&sp[3] = *IOUT(t, 0x78);
    sp[4] = *OUT(t, 0x80);
    sp[5] = *OUT(t, 0x7C);
    GCS_WaveCorvetteGrid_Overridevalue__FPiT0(&sp[3], SRC(0x60));
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(&sp[4], SRC(0x64), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(&sp[5], SRC(0x68), 30.0f);
    *IOUT(t, 0x78) = *(int *)&sp[3];
    *OUT(t, 0x80) = sp[4];
    *OUT(t, 0x7C) = sp[5];
    *IOUT(t, 0x84) = *(int *)&sp[3];
    *OUT(t, 0x8C) = sp[4];
    *OUT(t, 0x88) = sp[5] + sp[4] * 0.5f;

    *(int *)&sp[6] = *IOUT(t, 0x90);
    sp[7] = *OUT(t, 0x98);
    sp[8] = *OUT(t, 0x94);
    GCS_WaveCorvetteGrid_Overridevalue__FPiT0(&sp[6], SRC(0x6C));
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(&sp[7], SRC(0x70), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(&sp[8], SRC(0x74), 30.0f);
    *IOUT(t, 0x90) = *(int *)&sp[6];
    *OUT(t, 0x98) = sp[7];
    *OUT(t, 0x94) = sp[8];
    *IOUT(t, 0x9C) = *(int *)&sp[6];
    *OUT(t, 0xA4) = sp[7];
    *OUT(t, 0xA0) = sp[8];

    *(int *)&sp[9] = *IOUT(t, 0xA8);
    sp[10] = *OUT(t, 0xB0);
    sp[11] = *OUT(t, 0xAC);
    GCS_WaveCorvetteGrid_Overridevalue__FPiT0(&sp[9], SRC(0x78));
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(&sp[10], SRC(0x7C), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(&sp[11], SRC(0x80), 30.0f);
    *IOUT(t, 0xA8) = *(int *)&sp[9];
    *OUT(t, 0xB0) = sp[10];
    *OUT(t, 0xAC) = sp[11];
    *IOUT(t, 0xB4) = *(int *)&sp[9];
    *OUT(t, 0xBC) = sp[10];
    *OUT(t, 0xB8) = sp[11];

    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x4), SRC(0x4), 1.0f);
    if (t[1] <= 0.0f) {
        t[1] = 9.99999993e+29f;
        r->flags94 = r->flags94 | 1;
    } else if ((GLOBALVARS_IsInReplayMode__Fv() & 0xFF) != 0) {
        t[1] = t[1] + t[1];
    }
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0xC), SRC(0x9C), 0.0333333351f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x10), SRC(0xA0), 0.00111111125f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x14), SRC(0xA4), 0.0174532924f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x18), SRC(0xA8), 0.0333333351f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x1C), SRC(0xAC), 0.00111111125f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x24), SRC(0xB0), 0.0174532924f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x28), SRC(0xB4), 0.0174532924f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x3C), SRC(0xB8), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x40), SRC(0xBC), 1.0f);
    *IOUT(t, 0x44) = GCS_GetWaveIndex__FP4Moby(*(void **)((char *)src + 0xC0));
    GCS_WaveCorvetteGrid_Overridevalue__FPiT0(OUT(t, 0x48), SRC(0xCC));
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x4C), SRC(0xD0), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x50), SRC(0xD4), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPbPUc(OUT(t, 0x54), SRC(0xD8));
    if ((GLOBALVARS_IsInReplayMode__Fv() & 0xFF) != 0) {
        *IOUT(t, 0x48) = *IOUT(t, 0x48) << 1;
    }
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x58), SRC(0xC4), 30.0f);
    GCS_WaveCorvetteGrid_Overridevalue__FPfT0f(OUT(t, 0x5C), SRC(0xC8), 1.0f);
    GCSCORVETTE_RefreshEmitter__FP16GCSENEMY_EmitterP18GCSCORVETTE_Config(slot, t);
}
