/* SCRNSKINSCREEN_CurrentPlayerType__Fv -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct SkinPlayer {
    char pad[0x44];
    int playerType;
} SkinPlayer;

typedef struct SkinScreen {
    char pad[0x574];
    SkinPlayer *player;
} SkinScreen;

extern SkinScreen *g_skinScreen;

int SCRNSKINSCREEN_CurrentPlayerType__Fv(void)
{
    return g_skinScreen->player->playerType;
}
