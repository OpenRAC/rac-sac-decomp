/* BACKG_TEXTSTREAMER_GetTextureId__FUi -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_133FC0.c.
 */

extern int D_L01_003DFA48[];

int BACKG_TEXTSTREAMER_GetTextureId__FUi(unsigned int index)
{
    if (index >= 8)
        return 0;
    return D_L01_003DFA48[index];
}
