/* WEAPON_AutoswitchToHypershot__FP6PLAYER -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * If the current weapon is not already the hypershot (0x16), the hypershot
 * becomes the next weapon (offset 0x364) and the current weapon is remembered
 * (offset 0x358).
 */

typedef struct PLAYER PLAYER;

struct PLAYER {
    unsigned char unknown_000[0x344];
    unsigned int currentWeapon;      /* 0x344 */
    unsigned char unknown_348[0x10];
    unsigned int previousWeapon;      /* 0x358 */
    unsigned char unknown_35c[0x8];
    unsigned int nextWeapon;          /* 0x364 */
};

void WEAPON_AutoswitchToHypershot__FP6PLAYER(PLAYER *player)
{
    unsigned int current = player->currentWeapon;

    if (current != 0x16) {
        player->previousWeapon = current;
        player->nextWeapon = 0x16;
    }
}
