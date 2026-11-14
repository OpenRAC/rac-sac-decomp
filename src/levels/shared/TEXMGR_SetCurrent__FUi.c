/* TEXMGR_SetCurrent__FUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned int g;

void TEXMGR_SetCurrent__FUi(unsigned int id)
{
    g = id;
}
