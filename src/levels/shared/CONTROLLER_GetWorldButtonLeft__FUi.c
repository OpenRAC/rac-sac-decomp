/* CONTROLLER_GetWorldButtonLeft__FUi -- 8 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

unsigned int CONTROLLER_GetWorldButtonLeft__FUi(unsigned int buttons)
{
    return buttons & 1;
}
