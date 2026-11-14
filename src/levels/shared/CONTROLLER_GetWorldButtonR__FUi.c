/* CONTROLLER_GetWorldButtonR__FUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

int CONTROLLER_GetWorldButtonR__FUi(unsigned int id)
{
    return ((int)id >> 9) & 1;
}
