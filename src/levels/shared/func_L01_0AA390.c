/* func_L01_0AA390 -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Picks one of three record fields by a mode word.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0D1778.c.
 */

struct Block_0032CB18 { char pad[0x14]; int mode; };
extern struct Block_0032CB18 D_L01_003A9A48;
extern int ICONHORMENU_GetCurrentItemNode__FP12tICONHORMENU(char *);
int func_L01_0AA390(void)
{
    int record = ICONHORMENU_GetCurrentItemNode__FP12tICONHORMENU((char *)&D_L01_003A9A48);
    int mode = D_L01_003A9A48.mode;
    if (mode == 1) goto l1;
    if (mode == 0) goto l0;
    if (mode == 2) goto l2;
    return 0;
l1: return *(int *)(record + 0x2c);
l0: return *(int *)(record + 0x28);
l2: return *(int *)(record + 0x30);
}
