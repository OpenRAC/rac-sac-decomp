/* PAUSEMENU_SetCurrentWidgetId__FP10tPAUSEMENUUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct tPAUSEMENU {
    char pad[0x3C];
    unsigned int widgetId;
} tPAUSEMENU;

int PAUSEMENU_SetCurrentWidgetId__FP10tPAUSEMENUUi(tPAUSEMENU *self, unsigned int id)
{
    self->widgetId = id;
    return 1;
}
