/* HUD_GetNumberOfScreens__Fv -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_0B5180.c.
 */

extern char *D_FE_000FB47C;
extern unsigned char D_FE_000FB461;

int HUD_GetNumberOfScreens__Fv(void)
{
    char *record = D_FE_000FB47C;
    unsigned int flags;
    unsigned int selected;
    if (record == 0)
        return 0;
    flags = *(unsigned int *)(record + 4);
    selected = flags & 1;
    D_FE_000FB461 = (unsigned char)selected;
    if (*(unsigned int *)(record + 4) & 2)
        return *(int *)(record + (selected ? 0x14 : 0x10));
    return 0;
}
