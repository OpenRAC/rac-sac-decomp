/* HUDONELINER_CalculateWindowSize__FUi -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

int HUDONELINER_CalculateWindowSize__FUi(int width)
{
    int limit = 0xF8;

    return limit < width;
}
