/* HUDFXCYCLE_Reset__FP11tHUDCYCLEFX -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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
