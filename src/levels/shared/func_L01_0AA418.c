/* func_L01_0AA418 -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Clears two globals, then runs two helpers with fixed arguments.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0D1800.c.
 */

extern int D_L01_00266F84;
extern int D_L01_00266F98;
extern int HUDSOUND_Play__F9eHUDSOUND(int index);
extern void UPDATE_SetGameMode__F14GAME_MODE_LISTUi(int a, int b);

void func_L01_0AA418(void)
{
    D_L01_00266F98 = 0;
    D_L01_00266F84 = 0;
    HUDSOUND_Play__F9eHUDSOUND(0);
    UPDATE_SetGameMode__F14GAME_MODE_LISTUi(4, 0);
}
