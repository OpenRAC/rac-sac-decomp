/* LOADER_COLInit__FUi -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_12B908.c.
 */

extern char *LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(char *, int);
extern int COL_Init__FP13StdFileHeader(void *p);

int LOADER_COLInit__FUi(char *record)
{
    char *entry;
    if (record == 0) return 0;
    entry = LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(record, 11);
    if (entry == 0) return 0;
    return COL_Init__FP13StdFileHeader(entry + 0xc0);
}
