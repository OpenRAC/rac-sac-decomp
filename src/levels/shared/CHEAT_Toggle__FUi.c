/* CHEAT_Toggle__FUi -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_02AB70.c.
 */

extern int CHEAT_IsActive__FUi(unsigned int);
extern void CHEAT_Deactivate__FUi(unsigned int);
extern void CHEAT_Activate__FUi(unsigned int);

void CHEAT_Toggle__FUi(unsigned int bit)
{
    if (CHEAT_IsActive__FUi(bit) != 0) {
        CHEAT_Deactivate__FUi(bit);
    } else {
        CHEAT_Activate__FUi(bit);
    }
}
