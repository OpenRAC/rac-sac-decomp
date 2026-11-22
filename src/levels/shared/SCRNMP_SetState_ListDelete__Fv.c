/* SCRNMP_SetState_ListDelete__Fv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/16_multiplayer_01/LEVEL_16_0B8258.c.
 */

extern int D_L01_002630F8;
extern char *pGV;
extern void MEMCARDCLIENT_RequestListDelete__FUi(int);

void SCRNMP_SetState_ListDelete__Fv(void)
{
    D_L01_002630F8 = 9;
    MEMCARDCLIENT_RequestListDelete__FUi(*(int *)(pGV + 0x3c));
}
