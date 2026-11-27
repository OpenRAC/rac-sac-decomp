/* SCRNCHALLMENU_ResetMapAvail__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct ScrnChallMenu {
    char pad[0xCC];
    unsigned char mapAvail;
    unsigned char mapAvail2;
} ScrnChallMenu;

extern ScrnChallMenu g_scrnChallMenu;

void SCRNCHALLMENU_ResetMapAvail__Fv(void)
{
    g_scrnChallMenu.mapAvail = 0;
    g_scrnChallMenu.mapAvail2 = 0;
}
