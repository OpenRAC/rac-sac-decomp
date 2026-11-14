/* PLAYER_SetFlags__FP6PLAYERG9PLR_FLAGS -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies a 16-byte PLR_FLAGS value into the player at offset 0x264. The retail
 * moves the two 64-bit halves with unaligned load/store pairs because the
 * compiler does not know the alignment of either side, so the flags type is a
 * packed 16-byte structure of two 64-bit fields.
 *
 * The value arrives by copy: the caller (the by-value PLAYER_SetFlags
 * overload) copies the flags to its own frame and passes the address in a1,
 * which is how this ABI hands a 16-byte structure by value.
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
