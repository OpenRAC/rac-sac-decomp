/* MEMCARDCLIENT_SetCommandPtr__FP12tMEMCARD_CMD -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the argument in the global word at 0x27E90.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_002D30.c.
 */

extern char D_FE_00108AC8[];

void MEMCARDCLIENT_SetCommandPtr__FP12tMEMCARD_CMD(int value)
{
    *(int *)D_FE_00108AC8 = value;
}
