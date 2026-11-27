/* CONTROLLER_SetButtonsPressed__FUiUi -- 20 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct Buttons {
    unsigned int pressed;
    unsigned int prev;
} Buttons;

extern Buttons g_buttonsPressed;

void CONTROLLER_SetButtonsPressed__FUiUi(unsigned int unused, unsigned int pressed)
{
    g_buttonsPressed.prev = 0;
    g_buttonsPressed.pressed = pressed;
}
