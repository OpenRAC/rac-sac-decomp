/* MobyColor_CopyFlash__FP4MobyT0 -- 224 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Duplicates matching table entries under a new key.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_079C60.c.
 */

typedef struct {
    int key;
    unsigned char b;
    int c;
    float d;
    int e;
    int f;
} E;
extern unsigned D_L01_0026CDC8;
extern E D_L01_003B2E00[];

void MobyColor_CopyFlash__FP4MobyT0(int a, int b)
{
    unsigned i;
    if (D_L01_0026CDC8 < 16) {
        for (i = 0; i < D_L01_0026CDC8; i++) {
            if (D_L01_003B2E00[i].key == b) {
                D_L01_003B2E00[D_L01_0026CDC8].key = a;
                D_L01_003B2E00[D_L01_0026CDC8].b = D_L01_003B2E00[i].b;
                D_L01_003B2E00[D_L01_0026CDC8].c = D_L01_003B2E00[i].c;
                D_L01_003B2E00[D_L01_0026CDC8].d = D_L01_003B2E00[i].d;
                D_L01_003B2E00[D_L01_0026CDC8].e = D_L01_003B2E00[i].e;
                D_L01_003B2E00[D_L01_0026CDC8].f = D_L01_003B2E00[i].f;
                D_L01_0026CDC8++;
            }
        }
    }
}
