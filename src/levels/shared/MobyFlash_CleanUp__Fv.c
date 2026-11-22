/* MobyFlash_CleanUp__Fv -- 256 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Drops stale table entries by moving the last entry into their slot.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_07A400.c.
 */

typedef struct {
    char pad0[0x64];
    unsigned int w64;
} Owner;
typedef struct {
    Owner *w0;
    int w4;
    int w8;
    float wC;
    int w10;
    int w14;
} Ent;
extern int D_L01_0026CDD4;
extern int g_frameCount;
extern unsigned int D_L01_0026CDC8;
extern Ent D_L01_003B2E00[];

void MobyFlash_CleanUp__Fv(void)
{
    unsigned int i;

    if (D_L01_0026CDD4 != g_frameCount) {
        for (i = 0; i < D_L01_0026CDC8; i++) {
            if (D_L01_003B2E00[i].w14 == 3 || D_L01_003B2E00[i].w0 == 0 || (D_L01_003B2E00[i].w0->w64 & 0xF) != 1) {
                if (i == D_L01_0026CDC8 - 1) {
                    D_L01_0026CDC8 = i;
                } else {
                    D_L01_0026CDC8 = D_L01_0026CDC8 - 1;
                    D_L01_003B2E00[i].w0 = D_L01_003B2E00[D_L01_0026CDC8].w0;
                    D_L01_003B2E00[i].w8 = D_L01_003B2E00[D_L01_0026CDC8].w8;
                    D_L01_003B2E00[i].wC = D_L01_003B2E00[D_L01_0026CDC8].wC;
                    D_L01_003B2E00[i].w10 = D_L01_003B2E00[D_L01_0026CDC8].w10;
                    D_L01_003B2E00[i].w14 = D_L01_003B2E00[D_L01_0026CDC8].w14;
                }
            }
        }
    }
}
