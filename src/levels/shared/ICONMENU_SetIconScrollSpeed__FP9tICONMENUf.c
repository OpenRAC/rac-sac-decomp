/* ICONMENU_SetIconScrollSpeed__FP9tICONMENUf -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tICONMENU {
    unsigned int reserved_00;
    unsigned int reserved_04;
    unsigned int reserved_08;
    unsigned int reserved_0C;
    unsigned int reserved_10;
    unsigned int reserved_14;
    unsigned int reserved_18;
    float scrollSpeed; /* +0x1C */
} tICONMENU;

void ICONMENU_SetIconScrollSpeed__FP9tICONMENUf(tICONMENU *self, float speed)
{
    self->scrollSpeed = speed;
}
