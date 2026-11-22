/* MEMCARDCLIENT_IsAutoSaveQueued__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns one byte of the global flag table.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001400.c.
 */

extern unsigned char D_FE_00108ACD[];

unsigned char MEMCARDCLIENT_IsAutoSaveQueued__Fv(void)
{
    return D_FE_00108ACD[0];
}
