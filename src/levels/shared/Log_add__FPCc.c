/* Log_add__FPCc -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Forwards the object to the shared handler.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E18.c.
 */

extern char D_FE_001086B8[];

void Log_add__FPCcT0(void *, void *);

void Log_add__FPCc(void *p)
{
    Log_add__FPCcT0(D_FE_001086B8, p);
}
