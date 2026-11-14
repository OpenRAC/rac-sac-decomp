/* HUDFXCYCLE_Reset__FP11tHUDCYCLEFX -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resets the cycle effect of the HUD to 0: the body zeroes the word at offset
 * 8 of its argument. The scheduler places the store in the delay slot of the
 * return.
 */

typedef struct tHUDCYCLEFX tHUDCYCLEFX;

struct tHUDCYCLEFX {
    unsigned char pad[0x08];
    int m_field;
};

void HUDFXCYCLE_Reset__FP11tHUDCYCLEFX(tHUDCYCLEFX *fx)
{
    fx->m_field = 0;
}
