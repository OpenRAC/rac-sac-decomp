/* WEAPON_GetCurrWeapAmmo__FPC6PLAYER -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the ammunition of the weapon the player holds: the gadget slot index
 * at offset 0x344 of the player selects the gadget record, and its word at
 * offset 0x60 is returned unchanged.
 */

typedef struct WEAPON WEAPON;
typedef struct PLAYER PLAYER;

extern WEAPON *GADGET_GetData__FUi(unsigned int index);

struct WEAPON {
    unsigned char unknown_000[0x60];
    int ammo;
    unsigned char unknown_064[0x10];
};

struct PLAYER {
    unsigned char unknown_000[0x344];
    unsigned int weapon;
};

int WEAPON_GetCurrWeapAmmo__FPC6PLAYER(PLAYER *player)
{
    WEAPON *weapon = GADGET_GetData__FUi(player->weapon);
    return weapon->ammo;
}
