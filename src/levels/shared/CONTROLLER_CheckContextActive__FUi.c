/* CONTROLLER_CheckContextActive__FUi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned int D_FE_000F4DFC;

int CONTROLLER_CheckContextActive__FUi(unsigned int mask)
{
    return (mask & (D_FE_000F4DFC | 1u)) != 0;
}
