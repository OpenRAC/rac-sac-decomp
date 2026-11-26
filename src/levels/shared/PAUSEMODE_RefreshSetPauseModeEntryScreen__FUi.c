/* PAUSEMODE_RefreshSetPauseModeEntryScreen__FUi -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a value (3 when it is zero) and the constant 2 into a global record
 * and returns 1.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BC338.c.
 */

typedef struct {
    int a;
    int pad;
    int b;
} Rec;

extern Rec g_PauseModeData;

int PAUSEMODE_RefreshSetPauseModeEntryScreen__FUi(int v)
{
    g_PauseModeData.a = v != 0 ? v : 3;
    g_PauseModeData.b = 2;
    return 1;
}
