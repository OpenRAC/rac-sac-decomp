/* PLAYER_SetFlags__FP6PLAYERG9PLR_FLAGS -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct __attribute__((packed)) {
    long long low;
    long long high;
} PLR_FLAGS;

typedef struct __attribute__((packed)) {
    char pad[0x264];
    PLR_FLAGS flags;
} PLAYER;

void PLAYER_SetFlags__FP6PLAYERG9PLR_FLAGS(PLAYER *player, PLR_FLAGS flags)
{
    player->flags = flags;
}
