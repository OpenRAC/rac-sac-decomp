/* UPDATE_SetGameMode__F14GAME_MODE_LISTUi -- 52 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores a new state and argument in the global block unless state 8 is
 * replaced by 6.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_001AE0.c.
 */

struct Blk_01A828 {
    char pad_00[4];
    int state;
    int arg;
};

extern struct Blk_01A828 g_GameMode;

void UPDATE_SetGameMode__F14GAME_MODE_LISTUi(int state, int arg)
{
    struct Blk_01A828 *b = &g_GameMode;

    if (b->state == 8 && state == 6) {
        return;
    }
    b->state = state;
    b->arg = arg;
}
