/* Arena_GetWinCount__FUiUi -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/04_metalis/LEVEL_04_14EF60.c.
 */

extern void *func_L01_048268(void *o, int idx);
extern int GLOBAL_GetFlag__FUiUc(void *, int);

int Arena_GetWinCount__FUiUi(void *o, int idx)
{
    void *value = func_L01_048268(o, idx);
    return GLOBAL_GetFlag__FUiUc(value, 0xff);
}
