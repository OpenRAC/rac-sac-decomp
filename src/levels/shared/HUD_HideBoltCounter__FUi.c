/* HUD_HideBoltCounter__FUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct HUD_MainHudElement {
    int pad0[2];
    int state;
    int pad1;
    unsigned int param;
} HUD_MainHudElement;

extern HUD_MainHudElement D_L01_0025CDE8;

void HUD_HideBoltCounter__FUi(unsigned int param)
{
    HUD_MainHudElement *p = &D_L01_0025CDE8;

    p->param = param;
    p->state = 6;
}
