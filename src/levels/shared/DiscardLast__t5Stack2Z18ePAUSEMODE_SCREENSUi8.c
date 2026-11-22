/* DiscardLast__t5Stack2Z18ePAUSEMODE_SCREENSUi8 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Pops the last pushed word.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_0BCC00.c.
 */

int DiscardLast__t5Stack2Z18ePAUSEMODE_SCREENSUi8(int *p)
{
    int count = p[8];

    if (count == 0)
        return 0;
    p[8] = count - 1;
    return 1;
}
