/* SCRNCHALLMENU_SetMapItemAvail__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ScrnChallMenu {
    char pad[0xCC];
    unsigned char mapAvail;
    unsigned char mapItemAvail;
} ScrnChallMenu;

extern ScrnChallMenu D_L01_0025E018;

void SCRNCHALLMENU_SetMapItemAvail__Fv(void)
{
    ScrnChallMenu *p = &D_L01_0025E018;

    p->mapAvail = 1;
    p->mapItemAvail = 1;
}
