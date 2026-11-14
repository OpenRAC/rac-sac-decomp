/* ICONHORMENU_SetNumberVisibleIconSlots__FP12tICONHORMENUUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Stores the number of visible icon slots in the menu.
 */

typedef struct tICONMENU tICONMENU;

struct tICONMENU {
    unsigned int reserved_000;
    unsigned int reserved_004;
    unsigned int number_visible_icon_slots;
};

void ICONHORMENU_SetNumberVisibleIconSlots__FP12tICONHORMENUUi(tICONMENU *self,
                                                       unsigned int count)
{
    self->number_visible_icon_slots = count;
}
