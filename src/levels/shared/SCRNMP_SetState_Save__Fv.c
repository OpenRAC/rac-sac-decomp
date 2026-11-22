/* SCRNMP_SetState_Save__Fv -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_0B8288.c.
 */

extern int D_L01_002630F8;
extern int G_levelId;
extern char *pGV;
extern int MEMCARDCLIENT_RequestSave__FiUi(int, int);

void SCRNMP_SetState_Save__Fv(void)
{
    D_L01_002630F8 = 4;
    MEMCARDCLIENT_RequestSave__FiUi(G_levelId, *(int *)(pGV + 0x3c));
}
