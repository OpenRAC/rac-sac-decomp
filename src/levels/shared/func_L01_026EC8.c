/* func_L01_026EC8 -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_01B680.c.
 */

extern void LEVEL_Restart__Fv(void);
extern void UPDATE_SetGameMode__F14GAME_MODE_LISTUi(int, int);

void func_L01_026EC8(void)
{
    LEVEL_Restart__Fv();
    UPDATE_SetGameMode__F14GAME_MODE_LISTUi(4, 0);
}
