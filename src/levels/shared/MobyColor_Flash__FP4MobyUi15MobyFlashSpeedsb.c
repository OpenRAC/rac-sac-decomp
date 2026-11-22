/* MobyColor_Flash__FP4MobyUi15MobyFlashSpeedsb -- 140 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Dispatches one of three table entries for a small mode index when a global
 * count is below 16.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_079B40.c.
 */

extern unsigned int D_L01_0026CDC8;
extern char G_MobyFlash_DefaultParams[];
extern char D_L01_002AEB38[];
extern char D_L01_002AEB48[];
extern void MobyColor_Flash__FP4MobyUiPC15MobyFlashParamsb();

void MobyColor_Flash__FP4MobyUi15MobyFlashSpeedsb(void *a0, int a1, int a2)
{
    if (D_L01_0026CDC8 < 0x10) {
        switch (a2) {
        case 0:
            MobyColor_Flash__FP4MobyUiPC15MobyFlashParamsb(a0, a1, D_L01_002AEB48);
            break;
        case 1:
            MobyColor_Flash__FP4MobyUiPC15MobyFlashParamsb(a0, a1, G_MobyFlash_DefaultParams);
            break;
        case 2:
            MobyColor_Flash__FP4MobyUiPC15MobyFlashParamsb(a0, a1, D_L01_002AEB38);
            break;
        }
    }
}
