/* func_L01_026E48 -- 128 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct MCM MCM;

struct MCM {
    unsigned char pad000[0x3C0];
    int f3C0;
    unsigned char pad3C4[0x704 - 0x3C0 - 4];
    int f704;
};

extern MCM *D_L01_00256714;

extern void UPDATE_BeginFrame__Fb(int n);
extern void FADEOVERLAY_Render__Fv(void);
extern void HUD_ResetHudRenderStates__Fv(void);
extern void HUD_SetGuWidgetRenderState__Fv(void);
extern void HUD_RenderTopMost__Fv(void);
extern void HUD_RenderUberTopNoMatterWhat__Fv(void);
extern void SYSTEM_EndFrame__Fv(void);

void func_L01_026E48(void)
{
    unsigned long long v;
    int t;

    UPDATE_BeginFrame__Fb(1);
    FADEOVERLAY_Render__Fv();
    HUD_ResetHudRenderStates__Fv();
    HUD_SetGuWidgetRenderState__Fv();

    v = 0;
    if (D_L01_00256714->f704 == 0) {
        t = (D_L01_00256714->f3C0 < 3);
        v = t;
    }
    if (v & 0xFF)
        goto skip;

    HUD_ResetHudRenderStates__Fv();
    HUD_RenderTopMost__Fv();
    HUD_RenderUberTopNoMatterWhat__Fv();
skip:
    SYSTEM_EndFrame__Fv();
}
