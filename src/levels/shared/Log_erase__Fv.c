/* Log_erase__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char D_FE_001086B8[];

void Log_erase__FPCc(void *);

void Log_erase__Fv(float a, float b, float c, float d)
{
    Log_erase__FPCc(D_FE_001086B8);
}
