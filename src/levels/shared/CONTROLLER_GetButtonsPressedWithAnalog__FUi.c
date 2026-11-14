/* CONTROLLER_GetButtonsPressedWithAnalog__FUi -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the pressed buttons of a controller context or-ed with the
 * analog-button mask, and 0 when the context is not active. A global word
 * holds the analog-button mask that is added to the pressed buttons.
 */

extern unsigned int g_ControllerAnalogButtons;

extern unsigned int CONTROLLER_CheckContextActive__FUi(unsigned int index);
extern unsigned int CONTROLLER_GetButtonsPressed__FUi(unsigned int index);

unsigned int CONTROLLER_GetButtonsPressedWithAnalog__FUi(unsigned int index)
{
    if (!CONTROLLER_CheckContextActive__FUi(index))
        return 0;

    return CONTROLLER_GetButtonsPressed__FUi(index)
           | g_ControllerAnalogButtons;
}
