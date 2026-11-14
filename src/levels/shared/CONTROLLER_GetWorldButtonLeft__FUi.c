/* CONTROLLER_GetWorldButtonLeft__FUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The world button state is held in one word; the left button is its least
 * significant bit. The value is set in the delay slot of the return.
 */

unsigned int CONTROLLER_GetWorldButtonLeft__FUi(unsigned int buttons)
{
    return buttons & 1;
}
