/* HUDGENHEALTHBAR_Refresh__FUiiibUiUc -- 248 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Claims a 32-byte table slot: marks it, asks the pair routine matching the
 * global mode to accept the two values, clears the slot's flag when refused,
 * then records the values and kind byte.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_0B8590.c.
 */

typedef struct {
    int w0;
    int w4;
    char pad08[0x08];
    unsigned char b10;
    char pad11[0x07];
    int w18;
    int w1C;
} Slot;

extern Slot HUDGENHEALTHBAR_g_Data[];
extern char D_L01_003A2E98[];
extern int D_L01_0025CB74;

extern int HUDGENHEALTHBAR_IsShowing__FUi(int index);
extern void ConstrainTheseXY__17HUD_BoundingBox16PiT1(char *table, int *a, int *b);
extern int IsXYInsideThisBox__17HUD_BoundingBox16ii(char *table, int a, int b);

void HUDGENHEALTHBAR_Refresh__FUiiibUiUc(int index, int a, int b, int kind, int unused, unsigned char flag)
{
    unsigned char keep;

    keep = flag;
    HUDGENHEALTHBAR_IsShowing__FUi(index);
    HUDGENHEALTHBAR_g_Data[index].w4 = 0xFF;
    switch (D_L01_0025CB74) {
    case 1:
        ConstrainTheseXY__17HUD_BoundingBox16PiT1(D_L01_003A2E98, &a, &b);
        break;
    case 0:
    default:
        if (IsXYInsideThisBox__17HUD_BoundingBox16ii(D_L01_003A2E98, a, b) == 0) {
            keep = 0;
            HUDGENHEALTHBAR_g_Data[index].w4 = 0;
        }
        break;
    }
    HUDGENHEALTHBAR_g_Data[index].w18 = a;
    HUDGENHEALTHBAR_g_Data[index].w1C = b;
    HUDGENHEALTHBAR_g_Data[index].w0 = keep;
    HUDGENHEALTHBAR_g_Data[index].b10 = kind;
}
