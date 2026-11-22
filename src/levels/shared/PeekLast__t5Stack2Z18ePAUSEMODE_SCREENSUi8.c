/* PeekLast__t5Stack2Z18ePAUSEMODE_SCREENSUi8 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the address of the last pushed word.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_022FC8.c.
 */

int *PeekLast__t5Stack2Z18ePAUSEMODE_SCREENSUi8(int *p)
{
    int count = p[8];

    if (count == 0)
        return 0;
    return &p[count - 1];
}
