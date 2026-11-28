/* HUD_HideAmmoCounter__FUi -- 24 bytes.
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

extern HUD_MainHudElement D_L01_0025CD60;

void HUD_HideAmmoCounter__FUi(unsigned int param)
{
    HUD_MainHudElement *p = &D_L01_0025CD60;

    p->state = 6;
    p->param = param;
}
