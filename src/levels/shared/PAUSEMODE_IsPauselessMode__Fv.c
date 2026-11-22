/* PAUSEMODE_IsPauselessMode__Fv -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the global state byte while mode 6 is active, otherwise 0.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0BC280.c.
 */

extern unsigned char D_FE_001448F8;
extern int UPDATE_IsGameInThisMode__F14GAME_MODE_LIST(int value);

int PAUSEMODE_IsPauselessMode__Fv(void)
{
    return UPDATE_IsGameInThisMode__F14GAME_MODE_LIST(6) ? D_FE_001448F8 : 0;
}
