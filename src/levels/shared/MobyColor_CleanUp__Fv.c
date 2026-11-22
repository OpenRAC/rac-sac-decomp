/* MobyColor_CleanUp__Fv -- 152 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * When the current pointer differs, clears flag bits on each listed object and
 * resets the list.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_079A40.c.
 */

typedef struct Ent01_079A40 {
    unsigned char pad_00[0x64];
    int w_64;
    int w_68;
} Ent01_079A40;

typedef struct TblE01_079A40 {
    Ent01_079A40 *p;
    unsigned int pad_04;
} TblE01_079A40;

typedef struct Cnt01_079A40 {
    unsigned int n;
} Cnt01_079A40;

extern Ent01_079A40 *D_L01_0026CDD0;
extern Ent01_079A40 *g_frameCount;
extern Cnt01_079A40 D_L01_0026CDC4;
extern TblE01_079A40 D_L01_003B2D80[];

void MobyColor_CleanUp__Fv(void) {
    unsigned int i;

    if (D_L01_0026CDD0 == g_frameCount) {
        return;
    }
    for (i = 0; i < D_L01_0026CDC4.n; i++) {
        D_L01_003B2D80[i].p->w_64 = D_L01_003B2D80[i].p->w_64 & -0x81;
        D_L01_003B2D80[i].p->w_64 = D_L01_003B2D80[i].p->w_64 & -0x41;
        D_L01_003B2D80[i].p->w_68 = 0xFF000000;
    }
    D_L01_0026CDC4.n = 0;
    D_L01_0026CDD0 = g_frameCount;
}
