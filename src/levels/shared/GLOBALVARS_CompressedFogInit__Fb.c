/* GLOBALVARS_CompressedFogInit__Fb -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_0032E8.c.
 */

extern char *pGV;
extern void GAMEMAP_InitMapCompressedData__Fv(void);

int GLOBALVARS_CompressedFogInit__Fb(int force)
{
    char *record = pGV;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        GAMEMAP_InitMapCompressedData__Fv();
        return 1;
    }
    return 0;
}
