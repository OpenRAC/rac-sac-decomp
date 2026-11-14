/* HUD_DrawHangulJamoScaled__FUcffffUi -- 336 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef unsigned char Uc;
typedef unsigned int Ui;

extern void *GetFontTextureID__14DrawObjManagerUi(Ui index);
extern void HUD_DrawTextureSimpleArea__FP10AglTexturessssUsUsUsUsUi(
    void *texture,
    short a, short b, short c, short d,
    unsigned short e, unsigned short f, unsigned short g, unsigned short h,
    Ui i);
extern Ui fptoui(float x);

/* The jamo table of the module (0x270468 in the canonical module; its
 * retail name is unknown). */
extern unsigned char D_L11_00270468[];

Ui HUD_DrawHangulJamoScaled__FUcffffUi(Uc code, float f1, float f2, float f3,
                                       float f4, Ui flag)
{
    unsigned char *row = D_L11_00270468 + (((code - 0x31) & 0xFF) * 4);
    float sc = f4 * 16.0f;
    float v22 = f3 + f3;
    float v23 = f1;
    float v20 = f2;
    float v21 = (float)row[3];
    int a5, a6;
    short sc16;
    void *tex;

    a5 = row[0] * 16;
    a6 = row[1] * 16;
    sc16 = (short)sc;
    v21 = v21 * f3;
    tex = GetFontTextureID__14DrawObjManagerUi(1);
    v20 = v20 + v22;
    a5 = a5 + row[2];

    HUD_DrawTextureSimpleArea__FP10AglTexturessssUsUsUsUsUi(
        tex,
        (short)v23,
        (short)(v20 - (float)sc16),
        (short)v20,
        (short)a5,
        (unsigned short)a6,
        (unsigned short)(row[3] + a5),
        (unsigned short)(a6 + 16),
        (unsigned short)flag,
        0xFFFFFFFFu);

    return fptoui(v21);
}
