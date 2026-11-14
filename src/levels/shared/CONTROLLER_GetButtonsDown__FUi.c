/* CONTROLLER_GetButtonsDown__FUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern int g_buttonsDown;

int CONTROLLER_GetButtonsDown__FUi(unsigned int unused)
{
    (void)unused;
    return g_buttonsDown;
}
