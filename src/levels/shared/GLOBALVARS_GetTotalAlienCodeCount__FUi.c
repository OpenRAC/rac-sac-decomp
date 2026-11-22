/* GLOBALVARS_GetTotalAlienCodeCount__FUi -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_028330.c.
 */

extern int D_FE_00115538[];

int GLOBALVARS_GetTotalAlienCodeCount__FUi(int index)
{
    return D_FE_00115538[index - 1];
}
