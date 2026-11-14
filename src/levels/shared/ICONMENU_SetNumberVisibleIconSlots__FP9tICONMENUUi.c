/* ICONMENU_SetNumberVisibleIconSlots__FP9tICONMENUUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tICONMENU tICONMENU;

struct tICONMENU {
    unsigned int reserved_000;
    unsigned int reserved_004;
    unsigned int number_visible_icon_slots;
};

void ICONMENU_SetNumberVisibleIconSlots__FP9tICONMENUUi(tICONMENU *self,
                                                       unsigned int count)
{
    self->number_visible_icon_slots = count;
}
