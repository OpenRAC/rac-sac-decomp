/* PAUSEMENU_SetSelectedOverlayItemColor__FP10tPAUSEMENUUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tPAUSEMENU {
    char pad[0x7C];
    unsigned int color;
} tPAUSEMENU;

int PAUSEMENU_SetSelectedOverlayItemColor__FP10tPAUSEMENUUi(tPAUSEMENU *self, unsigned int color)
{
    self->color = color;
    return 1;
}
