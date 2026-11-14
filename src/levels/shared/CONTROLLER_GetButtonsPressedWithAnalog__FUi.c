/* CONTROLLER_GetButtonsPressedWithAnalog__FUi -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
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
